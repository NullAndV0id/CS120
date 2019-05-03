#include <iostream>

void backwards( int[] , int );

int main() {

  int input[5] = { 1, 2, 3, 4, 5 };
  backwards( input, 5 );

}

void backwards( int ary[] , int size ) {

  for(size; size > 0; size-- ) {
    std::cout << ary[size - 1];
  }

}