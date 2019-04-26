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

  llist.print();
  std::cout << llist.search(1) << std::endl;

  return 0;

}