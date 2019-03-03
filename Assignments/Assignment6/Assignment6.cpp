/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #6      //
// Section #: 04       //
// Date: 02/20/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cmath>

void printAssignmentHeader();
double wind_chill_factor( double tempurature , double wind_speed );
double fahrenheit_to_celcius( double tempurature );

int main() {

  double tempurature;
  double wind_speed;

  printAssignmentHeader();

  std::cout << "Please enter the tempurature in Fahrenheit: ";
  std::cin >> tempurature;

  std::cout << "Please enter the wind speed in Miles per Hour: ";
  std::cin >> wind_speed;

  std::cout << std::endl << "Tempurature (F): " << tempurature << std::endl;
  std::cout << "Wind Speed (MPH): " << wind_speed << std::endl;
  std::cout << "Wind Chill Factor (F): " << wind_chill_factor( tempurature , wind_speed ) << std::endl;
  std::cout << "Wind Chill Factor (C): " << fahrenheit_to_celcius( wind_chill_factor( tempurature , wind_speed ) ) << std::endl;

  return 0;

}

double wind_chill_factor( double tempurature , double wind_speed ) {

  return 35.74 + ( 0.6215 * tempurature ) - ( 35.75 * pow( wind_speed , 0.16) ) + ( ( 0.4275 * tempurature ) * pow(wind_speed, 0.16) );

}

double fahrenheit_to_celcius ( double tempurature ) {

  return ( ( 5 * ( tempurature - 32) ) / 9 );

}

void printAssignmentHeader() {

  std::cout << std::endl << "/////////////////////////" << std::endl;
  std::cout << std::endl << "//                     //" << std::endl;
  std::cout << std::endl << "// Name: Lachlan Lysne //" << std::endl;
  std::cout << std::endl << "// Assignment: #6      //" << std::endl;
  std::cout << std::endl << "// Section #: 04       //" << std::endl;
  std::cout << std::endl << "// Date: 02/20/2019    //" << std::endl;
  std::cout << std::endl << "//                     //" << std::endl;
  std::cout << std::endl << "/////////////////////////" << std::endl;

}
