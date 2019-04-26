bool multiplication_puzzle();
bool binary_to_decimal_puzzle();
bool decimal_to_binary_puzzle();


bool game_room( int point ) {

  bool ( *games[10] )();
  games[0] = &multiplication_puzzle;
  games[1] = &binary_to_decimal_puzzle;
  games[2] = &decimal_to_binary_puzzle; 

  std::cout << "You enter the next room and find a puzzle waiting on the table." << std::endl;
  return games[point]();

}

bool multiplication_puzzle() {

  std::srand( time( NULL) );

  int num1 = std::rand() % 100 + 1;
  int num2 = std::rand() % 100 + 1;
  int guess;

  std::cout << "The puzzle is a simple math problem with a keypad to enter your answer." << std::endl;
  std::cout << "The problem is: " << num1 << " x " << num2 << " = ";

  std::cin >> guess;

  if ( guess == ( num1 * num2 ) ) {
    std::cout << "You're correct! Congratulations!" << std::endl;
  }

  else {
    std::cout << "Oh no, you got it wrong!" << std::endl;
  }

}

bool binary_to_decimal_puzzle() {

  const int two_powers[8] = {128, 64, 32, 16, 8, 4, 2, 1};

  std::srand( time( NULL) );

  int num1 = std::rand() % 256;
  int answer = num1;
  int bin[8] = {0};
  int guess;

  for (int i=0; i < 8; i++) {
    if ( num1 >= two_powers[i] ) {
      bin[i] = 1;
      num1 -= two_powers[i];
    }
  }

  std::cout << "The puzzle is a binary to decimal conversion puzzle with a keypad to enter your answer." << std::endl;
  std::cout << "The binary number is: ";

  for (int i=0; i < 8; i++) {
    std::cout << bin[i];
  }

  std::cout << " -> ";

  std::cin >> guess;

  if ( guess == answer ) {
    std::cout << "You're correct! Congratulations!" << std::endl;
  }

  else {
    std::cout << "Oh no, you got it wrong!" << std::endl;
  }

}

bool decimal_to_binary_puzzle() {

  const int two_powers[8] = {128, 64, 32, 16, 8, 4, 2, 1};

  std::srand( time( NULL) );

  int num1 = std::rand() % 256;
  std::string answer = "00000000";
  std::string guess;

  std::cout << "The puzzle is a decimal to binary conversion puzzle with a keypad to enter your answer." << std::endl;
  std::cout << "The decimal number is: " << num1 << " -> ";

  std::cin >> guess;

  for (int i=0; i < 8; i++) {
    if ( num1 >= two_powers[i] ) {
      answer[i] = *"1";
      num1 -= two_powers[i];
    }
  }

  if ( guess == answer ) {
    std::cout << "You're correct! Congratulations!" << std::endl;
  }

  else {
    std::cout << "Oh no, you got it wrong!" << std::endl;
  }

}

bool logic_expression_parser( std::string expression ) {

  std::vector<int> terms;
  std::vector<char> opperators;

  for (int i=0; i < expression.length(); i++) {
    if ( int( expression[i] ) == 48 || int( expression[i] ) == 49 ) {
      terms.push_back( int( expression[i] ) - 48 );
    }
  }

  std::cout << terms[0] << std::endl;

}

bool logic_puzzle() {

  std::srand( time( NULL) );

  //char opperators = { 33, 38, 124};


}
