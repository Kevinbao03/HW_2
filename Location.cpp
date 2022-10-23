#include "Location.h"

Location:: Location(string place)
{
    this->location = place;
}

string
Location:: getLocation()
{
    return this->location;
}

Json::Value
Location::dump2JSON
()
{
    Json::Value result;
    result["Location"] = this->location;
    return result;
}