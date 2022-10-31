#ifndef _LOCATION_H_
#define _LOCATION_H_

#include "ecs36b_Common.h"


class Location
{
    private:
 
        
    public:
        string location;
        std::string people[2] = {};
        string thing;
        int numpeople = 0;
        Location();
        Location(string place);
        string getLocation();
        Json::Value dump2JSON();
        void setThings(std::string things);
        void addPeople(std::string person);
};

#endif
