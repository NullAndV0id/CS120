#include <iostream>

int fac(int n);

int main() {
  
  for (int i=1; i <= 50; i++) {
    std::cout << i << "! - " << fac(i) << std::endl;
  }

  return 0;
}

int fac(int n) {

  if (n == 1)
    return 1;

  return n * fac(n - 1);

}