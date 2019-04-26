#include <iostream>
#include <string>
#include <cmath>

struct point {

  double x;
  double y;

  // ===== Constructors ===== //

  point() {
    //Default Constructor
  }

  point( int new_x , int new_y ) {
    x = new_x;
    y = new_y;
  }

};

struct line {

  double m;
  double b;

  line( point p1 , point p2 ) {
    m = ( p1.y - p2.y ) / ( p1.x - p2.x );
    b = p1.y - ( m * p1.x );
  }

  line( float new_m , float new_b ) {
    m = new_m;
    b = new_b;
  }

  double solve( double x ) {
    return ( m * x ) + b;
  }

};

int main() {

  //point p1( -1 , 0 ) , p2( 0 , 3 );
  //line l1( p1 , p2 );

  line l1( 3 , 3 );

  std::cout << "m: " << l1.m << std::endl;
  std::cout << "b: " << l1.b << std::endl; 
  std::cout << "When x=1, y=" << l1.solve(1) << "." << std::endl;
  return 0;

}