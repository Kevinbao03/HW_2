
#ifndef _THING_H_
#define _THING_H_

// Thing.h

#include "ecs36b_Common.h"
#include "JvTime.h"

class Thing
{
 private:
 protected:
 public:
  
  std::string model;
  std::string sequence_num;
  std::string description;
  std::string name;

  
  Thing();
  Thing(std::string name);
  Json::Value dump2JSON(); // print the content of the object
  std::string getName();
};

#endif /* _THING_H_ */
