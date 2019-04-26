/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #9  //
// Section #: 04       //
// Date: 03/22/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime>

void extrema( int[] , int );
void shift( int[], int );

int main() {

  int numbers[10];
  float sum = 0;
  float average;

  std::cout << "Please enter 10 integer values to populate the array:" << std::endl;

  for (int i=0; i < 10; i++) {
    std::cin >> numbers[i];
  }

  for (int i=0; i < 10; i++) {
    sum += numbers[i];
  }

  average = sum / 10.0;

  std::cout << "\nSum of the given integers: " << sum << std::endl;
  std::cout << "Average of the given integers: " << average << std::endl;
  extrema( numbers, 10 );
  shift( numbers, 10 );

  return 0;

}

void extrema( int numbers[] , int size ) {

  int extreme = numbers[0];

  std::cout << "The maximum value in the given array is: ";

  for (int i=1; i < 10; i++) {
    if ( extreme < numbers[i] ) {
      extreme = numbers[i];
    }
  }

  std::cout << extreme << std::endl;

  extreme = numbers[0];

  std::cout << "The minimum value in the given array is: ";

  for (int i=1; i < 10; i++) {
    if ( extreme > numbers[i] ) {
      extreme = numbers[i];
    }
  }

  std::cout << extreme << std::endl;

}

void shift( int numbers[] , int size ) {

  int new_array[size];

  for (int i=1; i < size; i++) {
    new_array[i - 1] = numbers[i];
  }

  new_array[9] = numbers[0];

  std::cout << "The shifted array is [ ";

  for (int i=0; i < size; i++) {
    std::cout << new_array[i] << " ";
  }

  std::cout << "]" << std::endl;

}