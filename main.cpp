
// test_GPS.cpp

#include "Person.h"
#include "Thing.h"
#include "Location.h"
#include "Record.h"

int
main(int argc, char *argv[])
{
  // if (argc != 3) return -1;
  Person red_riding_hood{"little red riding hood"};
  Person grandmother{"grandmother"}; 
  Person wolf{"Wolf"};
  Person mother{"mother"};
  Thing red_hood{"red hood"};
  Thing cakeandwine{"cake and wine"};

  Location woods{"Woods"};
  Location grandmothersHome{"Grandma's House"};
  Location outsideWoods{"Outside Woods"};
  Thing threeTrees{"Three Large Oak Trees"};
  
  Location home {"little red riding hoods home"};
  red_riding_hood.setHome(home);
  red_riding_hood.setLocation(home, *getNowJvTime());
  mother.setHome(home);
  wolf.setHome(woods);
  wolf.setLocation(woods, *getNowJvTime());
  grandmothersHome.setThings(threeTrees.getName());

  grandmother.setClothes(red_hood);
  grandmother.giveClothes(red_riding_hood);

  red_riding_hood.setClothes(red_hood);


  Record r1{};
  r1.addPeople(red_riding_hood);
  r1.setLocation(home);
  r1.setTime(*getNowJvTime());
  std::cout << (r1.dump2JSON()).toStyledString() << std::endl;

  red_riding_hood.setObjects(cakeandwine);
  Record r2{};
  r2.addPeople(red_riding_hood);
  r2.addPeople(mother);
  r2.setLocation(home);
  r2.setTime(*getNowJvTime());
  std::cout << (r2.dump2JSON()).toStyledString() << std::endl;

  Record r3{};
  r3.addPeople(red_riding_hood);
  r3.addPeople(wolf);
  r3.setLocation(outsideWoods);
  r3.setTime(*getNowJvTime());
  std::cout << (r3.dump2JSON()).toStyledString() << std::endl;

  Record r4{};
  r4.addPeople(grandmother);
  r4.setLocation(grandmothersHome);
  r4.setTime(*getNowJvTime());
  std::cout << (r4.dump2JSON()).toStyledString() << std::endl;



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
