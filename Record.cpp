#include "Record.h"

Record::Record(){}

void
Record::setPerson
(Person person){
    this->person = person;
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


Json::Value 
Record::dump2JSON
(std::string arg)
{
    Json::Value result { };
    if (arg == "location"){
        result["record"] = this->location.dump2JSON();
    }
    else if (arg == "thing"){
        result["record"] = this->thing.dump2JSON();
    }

    return result;
    
}
