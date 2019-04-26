/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: E       //
// Section #: 04       //
// Date: 04/26/2019    //
//                     //
/////////////////////////

#include <iostream>

void printAssignmentHeader();
int get_numbers( int* , int , int , int);
int get_max( int[] , int );

int main() {

  printAssignmentHeader();
  
  int user_numbers[10];
  get_numbers( user_numbers , 10 , 1 , 8);
  get_max( user_numbers , 10 );

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

int get_numbers( int *array , int size , int low , int high ) {

  int ui;

  for (int i=0; i < size; i++) {
    std::cout << "Please enter a number to populate the array between " << low << " and " << high << ": ";
    std::cin  >> ui;

    while ( ( ui < low ) || ( ui > high ) ) {
      std::cout << "Invalid number entered, try again: " << std::endl;
      std::cin  >> ui; 
    }
  
    array[i] = ui;
  }


  return size;

}

int get_max( int array[] , int size ) {

  int max = array[0], min = array[0]; 
  double average = 0.0;

  for (int i=1; i < size; i++) {
    max = ( max < array[i] ? array[i] : max );
    min = ( min > array[i] ? array[i] : min );
    average += array[i];
  }

  average /= double( size );

  std::cout << "MAX: " << max <<  std::endl;
  std::cout << "MIN: " << min <<  std::endl;
  std::cout << "AVG: " << average <<  std::endl;


  return max;

}