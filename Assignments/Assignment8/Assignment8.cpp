/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #8      //
// Section #: 04       //
// Date: 03/27/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <ctime >

void printAssignmentHeader();

int main() {

  printAssignmentHeader();

  int choice;
  int user_input[6];
  int matched_numbers = 0;

  std::cout << "\nWhich lottery would you like to play:" << std::endl;
  std::cout << "[0] MegaMillions" << std::endl;
  std::cout << "[1] PowerBall" << std::endl;

  do {
    std::cin >> choice;
  } while ( !( choice == 0 ) && !( choice == 1 ) );

  for (int i=0; i <= 4; i++) {
    std::cout << "[1-" << (choice == 0 ? "70" : "69") << "] White Ball #" << i + 1 << ": ";
    std::cin >> user_input[i];
  }

  std::cout << (choice == 0 ? "[1-25] Mega" : "[1-26] Power") << " Ball: ";
  std::cin >> user_input[5];

  int numbers_size = choice == 0 ? 70 : 69;
  int numbers[numbers_size];
  int random_index;
  int swap;

  for (int i=0; i < numbers_size; i++) {
    numbers[i] = i + 1;
  }

  std::srand( time(NULL) );

  for (int i=0; i < numbers_size; i++) {
    random_index = rand() % numbers_size;
    swap = numbers[i];
    numbers[i] = numbers[random_index];
    numbers[random_index] = swap;
  }

  numbers[5] = std::rand() % ( choice == 0 ? 25 : 26 ) + 1;

  for (int i1=0; i1 < 5; i1++) {
    for (int i2=0; i2 < 5; i2++) {
      if ( user_input[i2] == numbers[i1] ) {
        matched_numbers++;
      }
    }
  }  

  std::cout << "The winning numbers are: [ ";

  for (int i=0; i < 5; i++) {
    std::cout << numbers[i] << " ";
  }

  std::cout << "]" << std::endl;
  std::cout << "The " << (choice == 0 ? "Mega" : "Power") << " Ball is: " << numbers[5] << std::endl;
  std::cout << "You matched " << matched_numbers << " numbers!" << std::endl;
  std::cout << "You " << (user_input[5] == numbers[5] ? "did" : "didn't" ) << " match the " << (choice == 0 ? "Mega" : "Power") << " Ball!" << std::endl;

  if ( matched_numbers == 4 && user_input[5] == numbers[5] ) {
    std::cout << "You won the jackpot!!!" << std::endl;
  }

  else {
    std::cout << "The jackpot eluded you this time! But you can't win if you don't play again!" << std::endl;
  }

  return 0;

}

void printAssignmentHeader() {

  std::cout << "#=====================#" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "# Name: Lachlan Lysne #" << std::endl;
  std::cout << "# Assignment: #8      #" << std::endl;
  std::cout << "# Section #: 04       #" << std::endl;
  std::cout << "# Date: 03/27/2019    #" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "#=====================#" << std::endl;

}


