/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #2  //
// Section #: 04       //
// Date: 12/24/2019    //
//                     //
/////////////////////////

#include <iostream>

int main() { 

  int   feet, inch  ; 
  int   totalInches ;
  int   idealWeight ; 
  float cm, kg      ; 

  std::cout << std::endl ; // Line for aesthetic spacing purposes.

  std::cout << "Please enter how tall you are. (Enter feet and inches as two seperate units.)" << std::endl ;
  std::cin  >> feet ;
  std::cin  >> inch ;

  std::cout << std::endl ; // Line for asethetic spacing purposes.

  totalInches = (feet * 12) + inch ; // Calculates total number of inches by adding given number of inches to the product of given feet and 12.
  cm          = totalInches * 2.54 ; // Uses given conversion factor (1in = 2.54cm) to find height in centimeters. 
  
  std::cout << "Height: " << feet << "'" << inch << "\" ( " << cm << "cm )"  << std::endl ; // Prints height in ft'in" and cm.
  
  idealWeight = 110 + ((totalInches - 60) * 5) ; // Calculates ideal weight based on the assumption that no one will be less than 5 feet.   
  kg          = idealWeight * 0.4536           ; // Uses given conversion factor (1lbs = 0.4536kg) to find ideal weight in kilograms.
  
  std::cout << "Ideal Weight: " << idealWeight << " ( " << kg << "Kg )"  << std::endl ; // Prints ideal weight in lbs and kg.
  
  std::cout << std::endl ; // Line for asethetic spacing purposes.

  return 0;

} // END OF PROGRAM
