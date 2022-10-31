
#ifndef _PERSON_H_
#define _PERSON_H_

// Person.h

#include "ecs36b_Common.h"
#include "JvTime.h"
#include "Location.h"
#include "Thing.h"

class Person
{
 private:
  std::string SSN;
  std::string name;
  Location home;
  Location location;
  JvTime since_when;
  Thing clothes;
  Thing Objects;
  
public:
  Person(std::string, std::string, Location);
  Person(std::string arg_name);
  Person();
  void setHome(Location location);
  void setLocation(Location location, JvTime time);

  bool operator==(Person& aPerson);
  std::string getSSN();
  std::string getName();
  Location getHome();
  Location getLocation();
  void setClothes(Thing thing);
  Thing getClothes();
  void setObjects(Thing thing);
  void giveClothes(Person person);
  void giveObjects(Person person);
  JvTime getLocationTime();
  Json::Value dump2JSON();
};

#endif  /* _PERSON_H_ */
