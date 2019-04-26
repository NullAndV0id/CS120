// == Standard Libraries == //
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// == User Created Headers == //
#include "Headers/grammar.h"
#include "Headers/weapon.h"
#include "Headers/stats.h"
#include "Headers/combat.h"
#include "Headers/enemy.h"
#include "Headers/player.h"
#include "Headers/inventory.h"
#include "Headers/item.h"
#include "Headers/room.h"
#include "Headers/scene.h"
#include "Headers/script.h"
#include "Headers/item_functions.h"
#include "Headers/game_state.h"

// == Beginning of Main Game Loop == //

int main() {

  print_graphic( "Graphics/Title_Screen.txt" );
  Enemy test;
  test.load_enemy( "_Enemy Templates/0");
  obj_test( test );

  std::cout << test.stats.current_hp << std::endl;

  return 0;

}

