

#ifndef _RECORD_H_
#define _RECORD_H_

#include "ecs36b_Common.h"
#include "Person.h"
#include "Location.h"
#include "JvTime.h"
#include "Thing.h"

class Record{
    private:
        Person people[2] = {};
        int numpeople = 0;
        Location location;
        Thing thing;
        JvTime time;
        

    public:
        Record();
        void setTime(JvTime time);
        void addPeople(Person person);
        void setLocation(Location location);
        void addThing(Thing thing);
        
        Json::Value dump2JSON();


};

#endif