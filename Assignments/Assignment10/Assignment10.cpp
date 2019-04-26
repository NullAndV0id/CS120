/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #10     //
// Section #: 04       //
// Date: 04/19/2019    //
//                     //
/////////////////////////

#include <iostream>

const int HEIGHT = 30 ;
const int WIDTH  = 40 ;

void printAssignmentHeader();
void print_2d_array( char array[HEIGHT][WIDTH] );
bool find( char array[HEIGHT][WIDTH] , char target , int *row_of_target , int *column_of_target);

int main() {

  printAssignmentHeader();

  char arr[HEIGHT][WIDTH];
  char target_char;
  int *row_ptr , *col_ptr;
  int target_row, target_col;

  row_ptr = &target_row;
  col_ptr = &target_col;
  
  for (int row=0; row < HEIGHT; row++) {
    for (int col=0; col < WIDTH; col++) {
      arr[row][col] = '-';
    }
  }

  for (int i=0; i < 10; i++) {
    do { 
      
      std::cout << "Please Enter A:" << std::endl;
      std::cout << "  Row Number (1-30): ";
      std::cin  >> target_row; 
      std::cout << "  Column Number (1-40): ";
      std::cin  >> target_col;
      std::cout << "  Single Character: ";
      std::cin  >> target_char;
    
    } while ( ( ( target_row < 0 ) || ( target_row > 31 ) ) || ( ( target_col < 0 ) || ( target_col > 41 ) ) );
  
    arr[target_row - 1][target_col - 1] = target_char;

  }

  std::cout << std::endl;
  print_2d_array( arr );

  std::cout << "\nPlease enter a target character: ";
  std::cin  >> target_char;

  if ( find ( arr , target_char , row_ptr , col_ptr ) ) {
    std::cout << "Character Found At : [" << *row_ptr << "][" << *col_ptr << "]" << std::endl;
  }

  else { 
    std::cout << "Character Not Found." << std::endl;
  }

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

void print_2d_array( char array[HEIGHT][WIDTH] ) {

  for (int row=0; row < HEIGHT; row++) {
    for (int col=0; col < WIDTH; col++) {
      std::cout << array[row][col];
    }
    std::cout << std::endl;
  }

}

bool find( char array[HEIGHT][WIDTH] , char target , int *row_of_target , int *column_of_target) {

  for (int row=0; row < HEIGHT; row++) {
    for (int col=0; col < WIDTH; col++) {
      if ( array[row][col] == target ) {
        *row_of_target    = row;
        *column_of_target = col;
        return true;
      }
    }
  } 

  return false;

}