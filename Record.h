

#ifndef _RECORD_H_
#define _RECORD_H_

#include "ecs36b_Common.h"
#include "Person.h"
#include "Location.h"
#include "JvTime.h"
#include "Thing.h"

class Record{
    private:
        Person person;
        Location location;
        Thing thing;
        

    public:
        Record();
        void setPerson(Person person);
        void setLocation(Location location);
        void addThing(Thing thing);
        
        Json::Value dump2JSON(std::string arg);


};

#endif