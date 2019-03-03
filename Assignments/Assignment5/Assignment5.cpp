/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #6  //
// Section #: 04       //
// Date: 02/20/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <time.h>

// ====== Game Functions ===== //
bool number_guessing_game();
bool rock_paper_scissors();
bool sum_guessing_game();
// =========================== //

// === Post-Game Processing Functions === //
int  percent(float part , float whole);
bool exit_game(int percent);
// ====================================== //

int main() {

  // Variable Declaration //
  
  int games = 0;
  int player_wins = 0;
  int menu_selector = 0;
  
  bool result;

  // ==================== //

  // Main Program Loop //

  do {

    result = false;

    std::cout << std::endl << "Welcome to the mini-game machine, please pick a game by entering a number." << std::endl;
    std::cout << "[0] To quit and receive your final score." << std::endl;
    std::cout << "[1] Random Number Guessing Game" << std::endl;
    std::cout << "[2] Rock, Paper, Scissors" << std::endl;
    std::cout << "[3] Sum Guessing Game" << std::endl;

    std::cin >> menu_selector;

    switch ( menu_selector ) {

      case 1:
        result = number_guessing_game();
        games++;
        break;

      case 2:
        result = rock_paper_scissors();
        games++;
        break;

      case 3:
        result = sum_guessing_game();
        games++;
        break;

    }

    if ( result == true ) {
      player_wins++;
    }

  } while ( menu_selector );

  // End of Main Program Loop //

  if ( games == 0 ) {
    std::cout << std::endl << "Aw man, you didn't want to play any games?" << std::endl;
    return 0;
  }

  std::cout << std::endl << "Status Report:" << std::endl;
  std::cout << "You played " << games << " games." << std::endl;
  std::cout << "You won " << player_wins << " games." << std::endl;
  exit_game( percent( player_wins , games ) );

  return 0;

}

bool number_guessing_game() {

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

  } while ( guess != target_number && tries <= 7);

  // End of Main Game Loop //

  if (tries <= 7) {
    std::cout << "Congratulations! It only took you " << tries << " guess(es) to guess our number." << std::endl;
    return true;
  }

  else {
    std::cout << "Sorry, you couldn't guess the number in seven tries. You loose." << std::endl; 
    return false;
  }

}

bool rock_paper_scissors() {

  // Variable Declaration //
  
  int player_throw;
  int computer_throw;
  int player_wins = 0;
  
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
      return true;
    }

  }

  // End of Main Game Loop //
  
  if ( player_wins == 2 ) {
    return true;
  }

  else {
    return false;
  }

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

int percent(float part , float whole) {

  return ( (part / whole) * 100 );

}

bool exit_game(int percent) {

  if ( ( percent == 0 ) && ( percent <= 25 ) ) {
    std::cout << "You didn't do so hot this go around. Maybe next time?" << std::endl;
  }

  else if ( ( percent > 25 ) && ( percent <= 50 ) ) {
    std::cout << "You did okay, but I bet with a little effort you can get better!" << std::endl;
  }

  else if ( ( percent > 50 ) && ( percent <= 75 ) ) {
    std::cout << "You did pretty good! Play again and see if you can't do better!" << std::endl;
  }

  else {
    std::cout << "You did excellent! Maybe we need some harder games for our champ?" << std::endl;
  }

  return true;

}