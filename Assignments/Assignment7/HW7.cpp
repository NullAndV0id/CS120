#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>

bool cypher_challenge();

int main() {

  cypher_challenge();

}

bool cypher_challenge() {

  std::srand( time( NULL ) );

  std::string answer = "elite";
  std::string guess;
  int displacement = ( std::rand( ) % 25 ) + 1;

  std::cout << "You look at the control console, and see a sticky note attached to one of the monitors." << std::endl;
  std::cout << "It reads: \"Today's Displacement is...\", but the rest of the message is too faded to read."<< std::endl;
  std::cout << "The screen is alive with a strange message: ";

  for (int i=0; i < answer.length(); i++) {
    if ( int( answer[i] ) + displacement > 122 ) {
      std::cout << char( int( answer[i] + displacement - 26 ) );
    }
    else {
      std::cout << char( int( answer[i] + displacement ) );
    }  
  }

  std::cout << "\n\nUnderneath the message the cursor is blinking, waiting for input." << std::endl;
  std::cout << "What do you attempt to enter in the console? >>> ";
  std::cin >> guess;

  if ( guess == answer ) {
    std::cout << "\nYou hear a whir and a buzz. Suddenly, the computer turns off." << std::endl;
    std::cout << "A panel next to the control pannel opens, revealing a keycard." << std::endl;
    std::cout << "You take the keycard." << std::endl;
    return true;
  }

  else {
    std::cout << "\nThe computer retruns to the same state, and nothing seems to have changed." << std::endl;
    return false;
  }

}