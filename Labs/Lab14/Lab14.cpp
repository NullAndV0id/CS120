/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #14 //
// Section #: 04       //
// Date: 04/25/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <string>

#include "Linked_List.h"

int main( int argc , char *argv[] ) {

  linked_list llist;
  node *current = new node();
  llist.head = current;

  for (int i=0; i < 3; i++) {

    current->next = new node();
    current = current->next;

  }

  std::cout << std::endl;

  llist.print();

  std::cout << std::endl;

  std::cout << "Search result for ID 123: " << llist.search( 123 ) << std::endl;
  std::cout << "Search result for ID 234: " << llist.search( 234 ) << std::endl;
  std::cout << "Search result for ID 678: " << llist.search( 678 ) << std::endl;
  std::cout << "Search result for ID 789: " << llist.search( 789 ) << std::endl;

  std::cout << "Search result for ID 124: " << llist.search( 124 ) << std::endl;
  std::cout << "Search result for ID 235: " << llist.search( 235 ) << std::endl;
  std::cout << "Search result for ID 679: " << llist.search( 679 ) << std::endl;

  return 0;

}