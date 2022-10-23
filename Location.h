#ifndef _LOCATION_H_
#define _LOCATION_H_

#include "ecs36b_Common.h"

class Location
{
    private:
        string location;
    public:
        Location(string place);
        string getLocation();
        Json::Value dump2JSON();
};

#endif
