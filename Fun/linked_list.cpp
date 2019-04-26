#include <iostream>
#include <string>

#include "list.h"

int main( int argc , char *argv[] ) {
  
  node test_node( "This is a test." , 1 , nullptr);
  node test_node2( "This is another test." , 2, nullptr);
  linked_list test(&test_node);
  test.append( &test_node2 );
  std::cout << test.end()->identifier << std::endl;

  return 0;
}