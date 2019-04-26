/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #8  //
// Section #: 04       //
// Date: 03/08/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>

typedef struct player {

  char   name[100];
  int    health;
  float  oxygen;
  float  flashlight_battery;

} player;

player player_init( player );
void player_status( player );

int main() {

  player p1, p2;

  p1 = player_init( p1 );
  p2 = player_init( p2 );

  player_status( p1 );
  player_status( p2 );

  return 0;

}

void player_status( player p ) {

    std::cout << std::endl << "Player Name: " << p.name << std::endl;
    std::cout << p.name << "'s Health is currently: " << p.health << std::endl;
    std::cout << p.name << "'s Oxygen is currently: " << p.oxygen << std::endl;
    std::cout << p.name << "'s Flashlight Battery is currently: " << p.flashlight_battery  << std::endl;

}

player player_init( player p ) {

    srand( time( NULL ) );

    std::cout << std::endl << "Creating a new character..." << std::endl;
    std::cout << std::endl << "Please enter a player name: ";
    std::cin >> p.name;
    
    p.health = 100;
    p.oxygen = ( rand() % 50 + 1 ) + 50;
    p.flashlight_battery = 100;

    std::cout << p.name << "'s Health set to: " << p.health << std::endl;
    std::cout << p.name << "'s Oxygen set to: " << p.oxygen << std::endl;
    std::cout << p.name << "'s Flashlight Battery set to: " << p.flashlight_battery  << std::endl;

    return p;

 }
