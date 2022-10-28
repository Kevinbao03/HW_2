
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

  jv_result = (this->location).dump2JSON();
  result["Current Location"] = jv_result;

  jv_result = (this->since_when).dump2JSON();
  result["since_when"] = jv_result;

  if (this->name != "")
    {
      result[" name"] = this->name;
    }

  // std::cout << jv_result.toStyledString() << std::endl;

  return result;
}

