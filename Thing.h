
#ifndef _THING_H_
#define _THING_H_

// Thing.h

#include "ecs36b_Common.h"
#include "Person.h"
#include "JvTime.h"
#include "Location.h"

class Thing
{
 private:
 protected:
 public:
  
  std::string model;
  std::string sequence_num;
  std::string description;
  Person owner;
  std::string name;
  int numpeople = 0;

  std::string people[2] = {};

  Location place;
  
  Thing();
  Thing(Location place);
  Thing(Person arg_owner, std::string name);
  Json::Value dump2JSON(); // print the content of the object
  void give(Person arg_owner);
  void addPeople(Person person);
};

#endif /* _THING_H_ */
