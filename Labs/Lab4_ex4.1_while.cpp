/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #4  //
// Section #: 04       //
// Date: 01/30/2019    //
// Exercise: 4.1.2     //
//                     //
/////////////////////////

#include <iostream>

int main() {

  int num, sum = 0, i = 0;

  while (i < 100) {

    std::cin >> num;
    sum += num;

    if (num == 0) { break; }
    i++;

  }

  std::cout << std::endl << "The sum of the given numbers is: " << sum << std::endl;

  return 0;

}