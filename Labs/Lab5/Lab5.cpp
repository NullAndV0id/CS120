/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #5  //
// Section #: 04       //
// Date: 02/14/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <time.h>

int  number_guessing_game();
int  *rock_paper_scissors();
bool sum_guessing_game();

int main() {

  // Initialize Variables to Store Game Results //
  
  int  number_guessing_game_result;
  int  *rock_paper_scissors_result;
  bool sum_guessing_game_result;

  // ========================================== //


  // Run Each Game Function and Store Result in Variable //

  number_guessing_game_result = number_guessing_game();
  rock_paper_scissors_result = rock_paper_scissors();
  sum_guessing_game_result = sum_guessing_game();

  // =================================================== //

  // Print Status Report //

  std::cout << std::endl << "==============================================================" << std::endl;
  std::cout << "Status Report:" << std::endl;
  std::cout << "==============================================================" << std::endl;
  std::cout << "The number guessing game took you " << number_guessing_game_result << " tries." << std::endl;
  std::cout << "You won " << rock_paper_scissors_result[0] << " out of " << rock_paper_scissors_result[1] << " rounds of rock-paper-scissors." << std::endl;

  if ( sum_guessing_game_result ) {
    std::cout << "You guessed the sum correctly in game 3." << std::endl;
  }

  else {
    std::cout << "You guessed the sum incorrectly in game 3." << std::endl;
  }

  if ( ( rock_paper_scissors_result[0] == 2 ) && ( sum_guessing_game_result == true ) ) {
    std::cout << "You won all three games!" << std::endl;
  }

  else if ( ( rock_paper_scissors_result[0] == 2 ) || ( sum_guessing_game_result == true ) ) {
    std::cout << "You won two out of three games!" << std::endl;
  }

  else {
    std::cout << "You only won one game!" << std::endl;
  }

  std::cout << "==============================================================" << std::endl;

  // =================== //

  return 0;

}

int number_guessing_game() {

  // Variable Declaration //
  
  int guess;
  int tries = 0;
  
  // ==================== //

  // Re-Seed Generator and Generate Target Number //
  
  std::srand( time( NULL ) );
  int target_number = ( rand() % 100 ) + 1;
  
  // ============================================ //

  // Main Game Loop //
  
  do {

    std::cout << std::endl << "You've currently guessed " << tries << " times, please guess a number between 1 and 100: "; 
    std::cin  >> guess;

    while ( ( guess < 1 ) || ( guess > 100 ) ) {
      std::cout << "Sorry, your guess was outside the acceptable range, guess again: ";
      std::cin  >> guess;
    }

    if ( guess < target_number ) {
      std::cout << "Your number is less than the number we're thinking of." << std::endl;
    }

    else if ( guess > target_number ) {
      std::cout << "Your number is greater than the number we're thinking of." << std::endl;
    }

    tries += 1;

  } while ( guess != target_number );

  // End of Main Game Loop //

  std::cout << "Congratulations! It only took you " << tries << " guesse(s) to guess our number." << std::endl;
  return tries;

}

int * rock_paper_scissors() {

  // Variable Declaration //
  
  int player_throw;
  int computer_throw;
  int player_wins = 0;
  
  // ==================== //

  // == Preping Output == //

  static int game_state[2]; 

  // ==================== //

  // Main Game Loop //

  for ( int round=1; round <= 3; round++ ) {

    do {

    std::cout << std::endl << "It's now round " << round << ". What do you throw? (1 = Rock, 2 = Paper, 3 = Sissors): ";
    std::cin  >> player_throw;

    while ( ( player_throw < 1 ) || ( player_throw > 3 ) ) {
      std::cout << "Sorry, your throw was outside the acceptable range, guess again: ";
      std::cin  >> player_throw; 
    }

    srand( time( NULL ) );
    computer_throw = ( rand() % 3 ) + 1;
    
    if (player_throw == computer_throw) {
      std::cout << "Tie! Try again!" << std::endl;
    }

    } while (player_throw == computer_throw);
  
    if ( player_throw == 1 ) {
      
      if ( computer_throw == 3 ) {
        std::cout << "Congratulations! You won round " << round << "." << std::endl;
        player_wins++;
      }
      
      else {
        std::cout << "Oh no! Computer won round " << round << "." << std::endl;
      } 
    
    }

    else if ( player_throw == 2 ) {
      
      if ( computer_throw == 1 ) {
        std::cout << "Congratulations! You won round " << round << "." << std::endl;
        player_wins++;
      }
      
      else {
        std::cout << "Oh no! Computer won round " << round << "." << std::endl;
      } 
    
    }

    else if ( player_throw == 3 ) {
      
      if ( computer_throw == 2 ) {
        std::cout << "Congratulations! You won round " << round << "." << std::endl;
        player_wins++;
      }
      
      else {
        std::cout << "Oh no! Computer won round " << round << "." << std::endl;
      } 
    
    }

    if ( player_wins == 2 ) {
      game_state[0] = player_wins;
      game_state[1] = round;
      return game_state;
    }

  }

  // End of Main Game Loop //
  
  game_state[0] = player_wins;
  game_state[1] = 3;
  return game_state;

}

bool sum_guessing_game() {

  // Variable Declaration //
  
  int guess;
  
  // ==================== //

  // Generate Two Random Ints in Range (1-50) //
  
  srand( time( NULL ) );
  int random_number_1 = ( rand() % 50 ) + 1;
  int random_number_2 = ( rand() % 50 ) + 1;
  
  // ======================================== //

  std::cout << std::endl << "Calculate the sum of " << random_number_1 << " and " << random_number_2 << "." << std::endl;
  std::cin  >> guess;

  if (guess == random_number_1 + random_number_2) {
    std::cout << "Congratulations, you are correct!" << std::endl;
    return true;
  }

  std::cout << "Oh no, you got it wrong!" << std::endl;
  return false;

}