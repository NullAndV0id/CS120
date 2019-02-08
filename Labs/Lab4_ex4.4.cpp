/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #4  //
// Section #: 04       //
// Date: 01/30/2019    //
// Exercise: 4.4       //
//                     //
/////////////////////////

#include <iostream>

int main() {

  std::cout << "   ";

  for (int i=0; i<=9; i++) {
    std::cout << " " << i;
  }

  std::cout << std::endl;

  for (int y=40; y<=110; y += 10) {
    
    std::cout << y << " ";

    if (y < 100) {
      std::cout << " ";
    }
    
    for (int x=0; x<=9; x++) {
      std::cout << static_cast<char>(x + y) << " ";
    }
    std::cout << std::endl;
  }

  return 0;

}