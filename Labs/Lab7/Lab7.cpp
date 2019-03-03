/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #7  //
// Section #: 04       //
// Date: 03/01/2019    //
//                     //
/////////////////////////

#include <iostream>

int nat_num();
int product( int , int );
void print_product( int );
void showProgramHeader();

int main() {

  showProgramHeader();
  print_product( product( nat_num() , nat_num() ) );
  return 0;

}

int nat_num() {

  int number;

  do {
    std::cout << "Please enter a natural number (whole number greater than 0): ";
    std::cin >> number;
  } while (number <= 0);

  return number;

}

int product(int num1, int num2) {

  return num1 * num2;

}

void print_product(int product) {

  std::cout << "The product of the two given numbers is: " << product << std::endl;

}

void showProgramHeader() {

  std::cout << "Name: Lachlan Lysne" << std::endl;
  std::cout << "Lab #: 7" << std::endl;
  std::cout << "Section #: 04" << std::endl;
  std::cout << "Due Date: 03/01/2019" << std::endl << std::endl;

}