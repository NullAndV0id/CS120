#include <iostream>

int power(int base, int exp) {

  if (exp == 1) { return base; }
  return base * power(base, exp - 1);

}

int main() {

  char ascii_tab [94];
  int base, exp;
  char test;
  
  for (int i = 32; i <= 126; i = i + 1) {
    ascii_tab[i - 32] = i;
  }

  std::cout << "\n";

  for (int i = 32; i <= 126; i = i + 1) {
    std::cout << ascii_tab[i - 32];
  }

  std::cout << "\n\n";

  std::cout << "Enter the base: ";
  std::cin  >> base;
  std::cout << "Enter the exponent: ";
  std::cin  >> exp;
  std::cout << power(base, exp) << std::endl;

  std::cout <<"\n";

  std::cin  >> test;
  std::cout << test << std::endl;

  std::cout <<"\n";

  return 0;

}
