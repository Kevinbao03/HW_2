

#ifndef _RECORD_H_
#define _RECORD_H_

#include "ecs36b_Common.h"
#include "Person.h"
#include "Location.h"
#include "JvTime.h"

class Record{
    private:
        Person people[2];
        Location location;
        int numpeople = 0;
        

    public:
        Record();
        void addPeople(Person person);
        void setLocation(Location location);
        
        Json::Value dump2JSON();


};

#endif