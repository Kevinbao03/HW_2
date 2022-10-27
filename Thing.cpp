#include "Thing.h"

void
myPrintLog
(std::string content, std::string fname)
{
  if (fname.size() == 0) return;
  
  FILE *log_f = fopen(fname.c_str(), "a");
  if (log_f == NULL) return;
  
  JvTime *jv_ptr = getNowJvTime();
  std::string *str_ptr = jv_ptr->getTimeString();
  fprintf(log_f, "[%s] %s\n", str_ptr->c_str(), content.c_str());
  delete str_ptr;
  delete jv_ptr;
  fflush(log_f);
  fclose(log_f);
  return;
}



Thing::Thing
(void)
{
  this->model = "";
  this->sequence_num = "";
  this->description = "";
}

Thing::Thing
(std::string name)
{
  this->model = "";
  this->sequence_num = "";
  this->description = "";
  this->name = name;
}

Thing::Thing
(Location location)
{
  this->model = "";
  this->sequence_num = "";
  this->description = "";
  this->place = location;
}

Thing::Thing
(Person arg_owner, std::string name)
{
  this->model = "";
  this->sequence_num = "";
  this->description = "";
  this->owner = arg_owner;
  this->name = name;
}

void
Thing::give
 (Person arg_owner)
{
  this->owner = arg_owner;
}

std::string 
Thing::getName()
{
  return this->name;
}


void
Thing::addPeople
  (Person person)
  {
    people[numpeople] = person.getName();
    numpeople = numpeople + 1;
  }


#ifdef OLD
void Thing::dump
(void)
{
  std::cout << "[Thing] dump-begin" << std::endl;
  std::cout << "model          = " << this->model << std::endl;
  std::cout << "sequence_num   = " << this->sequence_num << std::endl;
  std::cout << "description    = " << this->description << std::endl;
  std::cout << "[Thing] dump-end" << std::endl;
  return;
}
#endif /* OLD */

Json::Value Thing::dump2JSON
(void)
{
  Json::Value result { };
  Json::Value jv_result;
  
  jv_result = (this->owner).dump2JSON();
  result["owner"] = jv_result;


  if (this->name != "")
    {
      result["object"] = this->name;
    }

  // std::cout << jv_result.toStyledString() << std::endl;

  return result;
}

