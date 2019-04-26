/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #11     //
// Section #: 04       //
// Date: 04/24/2019    //
//                     //
/////////////////////////

#include <iostream>

void printAssignmentHeader();
int fib( int );
int abs( int );
double power( double , int );
double square_root( double , double , double );

int main() {

  int fib_input;
  double target;
  double estimate;
  double tollerance;

  printAssignmentHeader();

  std::cout << "\nFibbonachi Sequence Tests:" << std::endl;
  
  for (int i=0; i < 3; i++) {
    std::cout << "\n  Please enter which term in the sequence you hope to find: ";
    std::cin  >> fib_input;
    std::cout << "  Number at term " << fib_input << " is " << fib( fib_input ) << "." << std::endl;
  }

  std::cout << "\nSquare Root Tests:" << std::endl;

  for (int i=0; i < 3; i++) {
    std::cout << "\n  Please enter the number whose square root you wish to estimate: ";
    std::cin  >> target;
    std::cout << "  Please enter an overestimate for the root: ";
    std::cin  >> estimate;
    std::cout << "  Please enter your desired tollerance/accuracy for the estimate: ";
    std::cin  >> tollerance;
    std::cout << "  The suare root of " << target << " is approximately " \
              << square_root(target, estimate, tollerance) << "." << std::endl; 
  }

  return 0;

}

void printAssignmentHeader() {

  std::cout << "\n#=====================#" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "# Name: Lachlan Lysne #" << std::endl;
  std::cout << "# Assignment: #11     #" << std::endl;
  std::cout << "# Section #: 04       #" << std::endl;
  std::cout << "# Date: 04/24/2019    #" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "#=====================#" << std::endl;

}

int fib( int n ) {

  if ( n == 0 ) { return 0; }
  if ( n == 1 ) { return 1; }
  return ( fib( n - 1 ) + fib( n - 2 ) );

}

int abs( int num ) {

  return ( ( num < 0 ) ? num * -1 : num );

}

double power( double base , int exponent ) {

  if ( exponent == 0 ) { return 1; }
  return ( base * power( base , exponent - 1 ) );

}

double square_root( double target , double estimate , double tollerance ) {

if ( ( power( estimate , 2 ) - target ) <= tollerance ) { return estimate; }
return square_root ( target, ( 0.5 * ( estimate + ( target / estimate ) ) ), tollerance );

}