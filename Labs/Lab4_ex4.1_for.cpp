/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #4  //
// Section #: 04       //
// Date: 01/30/2019    //
// Exercise: 4.1.1     //
//                     //
/////////////////////////

#include <iostream>

int main() {

  int num, sum = 0;

  for (int i=0; i<100; i++) {

    std::cin >> num;
    sum += num;

    if (num == 0) { break; }

  }

  std::cout << std::endl << "The sum of the given numbers is: " << sum << std::endl;

  return 0;

}