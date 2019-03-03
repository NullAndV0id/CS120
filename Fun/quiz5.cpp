#include <iostream>

int nat_num();
int product(int num1, int num2);
void print(int number);

int main() {

  print( product( nat_num() , nat_num() ) );
  return 0;

}

int nat_num() {

  int input;
  std::cout << "Please enter a natural number (whole number greater than 0)." << std::endl;

  do {

    std::cin >> input;

  } while (input <= 0);

  return input;

}

int product(int num1, int num2) {

  return num1 * num2;

}

void print(int number) {

  std::cout << "The product of the two given natural numbers is " << number << "." << std::endl;

}