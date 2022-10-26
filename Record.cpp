#include "Record.h"

Record::Record(){}

void
Record::addPeople
(Person person){
    people[numpeople] = person;
    numpeople ++;
}

void
Record::setLocation
(Location location){
    this->location = location;
}

Json::Value 
Record::dump2JSON
(void)
{
  Json::Value result { };
    result["location"] = this->location.dump2JSON();
    result["people"] = "";
}
