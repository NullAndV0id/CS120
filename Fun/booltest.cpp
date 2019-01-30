#include <iostream>

int main() {

  std::cout << ( false ) << std::endl ;  // false(0)
  std::cout << ( true  ) << std::endl ;  // true (1)
  
  std::cout << ( false < true  ) << std::endl ; // true  (1) 0 < 1
  std::cout << ( true  < false ) << std::endl ; // false (0) 1 < 0

  std::cout << ( true + 5 ) << std::endl ; // 6 (true evaluates as 1 in normal numerical expressions.)

  std::cout << ( ( false + 5 ) < true ) << std::endl ; // Should evaluate false(0). (YES)

  if (-1) {
    std::cout << "Yikes." << std::endl;
  }

  return 0;
}