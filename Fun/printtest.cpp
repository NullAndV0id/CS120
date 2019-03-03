#include <iostream>

void printTowers( int towers[][5] );

int main() {


  //=== Variable Declaration and Initialization ===//
  
  static int towers[3][5];

  for ( int i=1; i <= 5; i++ ) {
    towers[0][i - 1] = i;
    towers[1][i - 1] = 0;
    towers[2][i - 1] = 0;
  }

  //===============================================//

  printTowers( towers );

}

void printTowers( int towers[][5] ) {

  for (int rings)
    for ()

}