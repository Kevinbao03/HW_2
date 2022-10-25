
#ifndef _PERSON_H_
#define _PERSON_H_

// Person.h

#include "ecs36b_Common.h"
#include "GPS.h"
#include "JvTime.h"
#include "Location.h"

class Person
{
 private:
  std::string SSN;
  std::string name;
  Location home;
  Location location;
  JvTime since_when;
  
public:
  Person(std::string, std::string, Location);
  Person(std::string arg_name);
  Person();
  void setHome(Location);
  void setLocation(Location, JvTime);

  bool operator==(Person& aPerson);
  std::string getSSN();
  std::string getName();
  Location getHome();
  Location getLocation();
  JvTime getLocationTime();
  Json::Value dump2JSON();
};

#endif  /* _PERSON_H_ */
