/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #9      //
// Section #: 04       //
// Date: 04/10/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>

void printAssignmentHeader();
void report_highest( float* );
void report_lowest( float* );
void report_avererage_high( float* );
void report_avererage_low( float* );
void report_snow_change( float* );

int main() {

  printAssignmentHeader();

  std::string trash;

  int month = 1;
  int year = 2016;

  float lows[31];
  float highs[31];
  float precips[31];
  float snows[31];
  float snow_depths[31];

  std::fstream file;
  file.open("weather.txt");

  getline( file , trash );

  for (int i=0; i < 31; i++) {
    file >> trash;
    file >> trash;
    file >> trash;
    file >> highs[i];
    file >> lows[i];
    file >> precips[i];
    file >> snows[i];
    file >> snow_depths[i];
  }

  report_highest( highs );
  report_lowest( lows );
  report_avererage_high( highs );
  report_avererage_low( lows );
  report_snow_change( snow_depths );

  return 0;

}

void printAssignmentHeader() {

  std::cout << "#=====================#" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "# Name: Lachlan Lysne #" << std::endl;
  std::cout << "# Assignment: #9      #" << std::endl;
  std::cout << "# Section #: 04       #" << std::endl;
  std::cout << "# Date: 04/10/2019    #" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "#=====================#" << std::endl;

}

void report_highest( float *high_values ) {

  float highest = high_values[0];

  for (int i=0; i < 31; i++) {
    highest = ( ( highest < high_values[i] ) ? high_values[i] : highest );
  }

  std::cout << "January's hottest high was: " << highest << std::endl;

}

void report_lowest( float *low_values ) {

  float lowest = low_values[0];

  for (int i=0; i < 31; i++) {
    lowest = ( ( lowest > low_values[i] ) ? low_values[i] : lowest );
  }

  std::cout << "January's coldest low was: " << lowest << std::endl;

}

void report_avererage_high( float *high_values ) {

  float sum = 0;

  for (int i=0; i < 31; i++) {
    sum += high_values[i];
  }

  std::cout << "January's average high was: " << sum / 31.0 << std::endl;

}

void report_avererage_low( float *low_values ) {

  float sum = 0;

  for (int i=0; i < 31; i++) {
    sum += low_values[i];
  }

  std::cout << "January's average low was: " << sum / 31.0 << std::endl;

}

void report_snow_change( float *snow_values ) {

  std::cout << "\nThe difference in snow between dates is given below: " << std::endl;

  for (int i=0; i < 30; i++) {
    std::cout << "1-" << i + 1 << "-2016 and 1-" << i + 2 << "-2016: " << \
    snow_values[i] - snow_values[i + 1] << std::endl;
  }

}