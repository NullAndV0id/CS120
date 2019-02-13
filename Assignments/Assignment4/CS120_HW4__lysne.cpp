/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Section #: 04       //
// Due Date: 2/13/2019 //
// Assignment: #4      //
// Exercise: 1         //
//                     //
/////////////////////////

#include <iostream>
#include <cstdlib>
#include <time.h>

int main() { //Beginning of Main

  // ===== Variable Declaration ===== //
  int objects            ;
  int current_player     ;
  int move               ;
  int player_wins = 0    ;
  int computer_wins = 0  ;
  int new_game = 1       ;
  // ================================ //

  std::cout << std::endl << "Welcome to the game of NIM! The rules are quite simple!" << std::endl;
  std::cout << "The game revolves around a stack of objects." << std::endl;
  std::cout << "During their turn, a player will take 1 to 3 objects from the stack." << std::endl;
  std::cout << "The stack's size will reduce throughout the game, till it reaches 0" << std::endl;
  std::cout << "The player who's move reduces the stack to 0 looses." << std::endl;
  std::cout << "Now, with the rules out of the way, please enjoy a game of NIM!" << std::endl;

  do { //Inifnite loops. Makes new games until program is terminated.

    do {
      std::srand(time(NULL));
      objects = 25 + ( std::rand() % 26 );
    } while (objects % 4 == 1);

    current_player = 1;

    do { //Main Game Loop

      // Beginning of a Turn //

      std::cout << std::endl << "| ";

      for (int i=0; i < objects; i++) {
        std::cout << "#" ;
      }

      std::cout << " |" << std::endl << objects << " objects remain on the stack." << std::endl;

      
      // Player's Turn //
      if ( current_player == 1 ) {

        std::cout << "Please enter how many objects you'd like to remove: ";
        std::cin >> move;

        while ( move < 1 || move > 3 || move > objects ) {
          std::cout << "Illegal move attempted, please enter a new move: ";
          std::cin >> move; 
        }

        std::cout << "You remove " << move << " objects from the stack." << std::endl;

      }

      
      // Computer's Turn //
      else {

        do {

          if (objects % 4 == 1) {
            move = std::rand() % 3 + 1;
          } 

          else { //If this condition runs once the computer eventually wins.
          
            if (objects % 4 == 0) {
              move = 3;
            }
          
            else {
              move = objects % 4 - 1 ;
            }
        
          }

        } while ( move < 1 || move > 3 || move > objects );

       std::cout << "Opponent removes " << move << " objects from the stack." << std::endl;

      }

      //Post turn processing and commentary.
      objects -= move;
      
      if (objects == 0) {
        std::cout << "Oh no!" << std::endl;
      }

      else if (objects == 1) {
        std::cout << "The next player looses for sure! What an excellent move!" << std::endl;
      }

      else if (objects > 1 && objects <= 4) {
        std::cout << "The next move will determine the outcome of this game for sure!" << std::endl;
      }

      else if (objects <= 7) {
        std::cout << "This game is coming to a close in only a few more moves!" << std::endl;
      }

      else if (objects % 4 == 1) {
        std::cout << "The next player might face great difficulty for the rest of the game! Excellent move!" << std::endl;
      }

      else if (objects % 4 != 1) {
        std::cout << "That move could've costed them the game!" << std::endl;
      }

      current_player = (current_player + 1) % 2;

    } while ( objects > 0 ); //End of Main Game Loop

    // End of Game Text and Processing //
    
    if (current_player == 0) {
      std::cout << std::endl << "Sorry, you lost! Better luck in the next game!"; 
      computer_wins++;
    }

    else {
      std::cout << std::endl << "Congratulations! You beat our peerless AI!";
      player_wins++;
    }

    std::cout << std::endl << "You've won " << player_wins << " game(s) so far." << std::endl;
    std::cout << "The AI has won " << computer_wins << " game(s) so far." << std::endl;
    std::cout << "Would you like to play again? (0 to exit, anything other number to continue.)" << std::endl;
    std::cin >> new_game;

    if ( !new_game ) {
      return 0;
    }


  } while (true); //End of main loop. Runs until program is exited.

  return 0;

} // End of Main
