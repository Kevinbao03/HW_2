
#include "Person.h"

//hellow


Person::Person(std::string arg_SSN, std::string arg_name, Location arg_home)
{
  this->SSN = arg_SSN;
  this->name = arg_name;
  this->home = arg_home;
}

Person::Person(std::string arg_name)
{
  this->name = arg_name;

}

Person::Person()
{
  this->SSN = "";
  this->name = "";
  this->home = Location {};
}

void
Person::setHome
(Location arg_home)
{
  this->home = arg_home;
}

void
Person::setObjects
(Thing thing)
{
  this->Objects = thing;
}

void
Person::setClothes
(Thing thing)
{
  this->clothes = thing;
}

void
Person::setLocation
(Location arg_location, JvTime arg_time)
{
  this->location = arg_location;
  this->since_when = arg_time;
}

Location
Person::getHome
(void)
{
  return this->home;
}

std::string
Person::getSSN()
{
  return this->SSN;
}

std::string
Person::getName()
{
  return this->name;
}

Thing
Person::getClothes()
{
  return this->clothes;
}

void
Person::giveClothes
(Person person)
{
  Thing clothing = this->clothes;
  person.setClothes(clothing);
}

void
Person::giveObjects
(Person person)
{
  person.setObjects(this->Objects);
  this->Objects = Thing();
}


bool
Person::operator==
(Person& aPerson)
{
  return (this->SSN == aPerson.getSSN());
}

Json::Value
Person::dump2JSON
(void)
{
  Json::Value result { };
  Json::Value jv_result;
  
  jv_result = (this->home).dump2JSON();
  result["home"] = jv_result;

  if (this->name != "")
    {
      result[" name"] = this->name;
    }


  if (this->Objects.getName() != ""){
      result["things"] = this->Objects.dump2JSON();
     
  }

  if (this->clothes.getName() != ""){
  result["clothes"] = this->clothes.dump2JSON();
  }
  

  // std::cout << jv_result.toStyledString() << std::endl;

  return result;
}

