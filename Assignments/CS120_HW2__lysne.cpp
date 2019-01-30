/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Section #: 04       //
// Due Date: 1/30/2019 //
// Assignment: #2      //
// Exercise: 1         //
//                     //
/////////////////////////

#include <iostream>

int main() { //Function (1)

  // === Variable Declaration === //
  int favorite ;
  int disliked ;
  int age      ;
  int mystic   ;
  // ============================ //

  std::cout << "Enter your favorite number. (no decimals):" << std::endl ;
  std::cin  >> favorite ;

  std::cout << "Enter a number you dont like. (no decimals):" << std::endl ;
  std::cin  >> disliked ;

  std::cout << "Enter your age in years. (no decimals):" << std::endl ;
  std::cin  >> age ;

  mystic = ( ( favorite + disliked ) * age ) % 20 ;
  std::cout << "Your lucky number for today is: " << mystic << std::endl ;

  std::cout << std::endl ;

  if ( mystic < 0 ) {
    std::cout << "Negativity rules your heart today." << std::endl ;
  }

  else if ( mystic <= 5 ) {
    std::cout << "Simplicity will guide you to success today." << std::endl ;
  }

  else if ( mystic == 7 ) {
    std::cout << "Your luck today is as a blue moon, rare and beautiful." << std::endl ;
  }

  else if ( mystic <= 10 ) {
    std::cout << "Today carries no ill or good omen." << std::endl ;
  }

  else if ( mystic == 13 ) {
    std::cout << "Superstition will guide your path today." << std::endl ;
  }

  else if ( mystic <= 15 ) {
    std::cout << "You will expirience something new today." << std::endl ;
  }

  else if (mystic <= 20) {
    std::cout << "Today is the day for growth." << std::endl ;
  }

  else {
    std::cout << "Gratze, you broke the program." << std::endl ;
  }

  return 0;

} // End Function (1)
