/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: #12     //
// Section #: 04       //
// Date: 05/03/2019    //
//                     //
/////////////////////////

#include <iostream>

#include "stack.h"
#include "queue.h"

void printAssignmentHeader();

int main() {

  printAssignmentHeader();

  // === STACK TESTING ================================================ //

  {

    std::cout << "\nEnd Result for Stack Testing: ";

    char first_input[7] = { 't' , 'e' , 's' , 't' , 'a' , 'n' , 'g' };
    char second_input[3] = { 'i' , 'n' , 'g' };
    Stack stack;

    for (int i=0; i < 7; i++) {
      stack.push( first_input[i] );
    }

    for (int i=0; i < 3; i++) {
      stack.pop();
    }

    for (int i=0; i < 3; i++) {
      stack.push( second_input[i] );
    }

    while ( !( stack.empty() ) ) {
      std::cout << stack.pop();
    }

    std::cout << std::endl;

  }

  // ================================================================== //

  // === QUEUE TEST ================================ //

  {

    std::cout << "End result for Queue Testing: ";

    int first_input[6] = { 1 , 2 , 3 , 4 , 7 , 8};
    int second_input[2] = { 5 , 6 };
    Queue queue;

    for (int i=0; i < 6; i++) {
      queue.insert( first_input[i] );
    }

    for (int i=0; i < 2; i++) {
      queue.remove();
    }

    for (int i=0; i < 2; i++) {
      queue.insert( second_input[i] );
    }

    while ( !( queue.empty() ) ) {
      std::cout << queue.remove();
    }

    std::cout << std::endl;
      
  }

  // =============================================== //

  return 0;

}

void printAssignmentHeader() {

  std::cout << "\n#=====================#" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "# Name: Lachlan Lysne #" << std::endl;
  std::cout << "# Assignment: #12     #" << std::endl;
  std::cout << "# Section #: 04       #" << std::endl;
  std::cout << "# Date: 05/03/2019    #" << std::endl;
  std::cout << "#                     #" << std::endl;
  std::cout << "#=====================#" << std::endl;

}
