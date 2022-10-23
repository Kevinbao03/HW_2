
// test_GPS.cpp

#include "Person.h"
#include "IOT_Thing.h"
#include "Thing.h"
#include "Location.h"

int
main(int argc, char *argv[])
{
  // if (argc != 3) return -1;
  Person red_riding_hood{"little red riding hood"};
  Person grandmother{"grandmother"}; 
  Thing red_hood{grandmother};
  red_hood.give(red_riding_hood);
  Location place("china");
  std::cout << (place.dump2JSON()).toStyledString() << std::endl;


  /*
  std::cout << (red_riding_hood.dump2JSON()).toStyledString() << std::endl;
  std::cout << (red_hood.dump2JSON()).toStyledString() << std::endl;
*/

  Person mother{"mother"};
  Thing cake{mother};
  Thing wine{mother};

  cake.give(red_riding_hood);
  wine.give(red_riding_hood);



  
  
  /*
  
  GPS_DD gps_Home_Woodland { 38.672215864622636, -121.72280111121437 };
  GPS_DD gps_TLC_UCDavis   { 38.53874868013882,  -121.7542091083306 };
  GPS_DD gps_IKEA_Sacramento { 38.58681641563053, -121.55296296578501};

  Person Felix { "987654321", "Felix", gps_Home_Woodland };
  Felix.setLocation(gps_IKEA_Sacramento, (*getNowJvTime()));

  IP_Address meatball_IP { 2850883174 };
  IOT_Thing Swedish_Meatball { Felix , meatball_IP };
  Swedish_Meatball.model = "HUVUDROLL";
  Swedish_Meatball.sequence_num = "123456-0000";
  Swedish_Meatball.description = "frozen";
  Swedish_Meatball.location = gps_Home_Woodland;
  Swedish_Meatball.purchased = *getNowJvTime();
  Swedish_Meatball.sold = *getNowJvTime();
  Swedish_Meatball.owner = Felix;

  Felix.setLocation(gps_TLC_UCDavis, (*getNowJvTime()));

  std::cout << (Felix.dump2JSON()).toStyledString() << std::endl;
  std::cout << (Swedish_Meatball.dump2JSON()).toStyledString() << std::endl;
  
  // GPS_DD current { atof(argv[1]), atof(argv[2]) };
  // GPS_DD gps_NYC {40.7, -73.95};
  // GPS_DD gps_Sydney {-33.87, 151.213};
  // double distance_calculated;
  // distance_calculated = gps_TLC_UCDavis.distance(current);
  // std::cout << "the distance to Davis is " << distance_calculated << " miles." << std::endl;
  */
 
  return 0;
}
