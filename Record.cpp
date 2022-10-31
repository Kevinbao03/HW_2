#include "Record.h"

Record::Record(){}

void
Record::addPeople
(Person person){
    this->people[numpeople] = person;
    numpeople += 1;
}

void
Record::setLocation
(Location location){
    this->location = location;
}

void
Record::addThing
(Thing thing)
{
    this->thing = thing;
}

void
Record::setTime
(JvTime time)
{
    this->time = time;
}


Json::Value 
Record::dump2JSON
()
{
    Json::Value result { };
    result["Location:"] = this->location.dump2JSON();
    
    if (this->people[1].getName() != ""){
        result["Person 1"] = this->people[1].dump2JSON();
        result["Person 2"] = this->people[0].dump2JSON();

    }

    else if(this->people[0].getName() != ""){
        result["Person"] = this->people[0].dump2JSON();
    }

    result["Time"] = this->time.dump2JSON();

    return result;
    
}
