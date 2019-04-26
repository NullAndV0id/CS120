// General header. Handles english grammar things for the script such as pluralization and
// possessive noun forms. Also handles file I/O functions and graphics script for title and
// ending screens.

std::string plural( std::string str ) { //Function to dynamically pluralize a string.

  if (str[str.length() - 1] == *"s") {
    return str + "es";
  }

  else {
    return str + "s";
  }

}

std::string possess( std::string str ) { //Function to dynamically make possesive text.

  if (str[str.length() - 1] == *"s") {
    return str + "'";
  }

  else {
    return str + "'s";
  }  

}

std::vector<std::string> read_data( std::string filepath ) { //Function to read data from file. Returns file line-by-line as string vector.

  std::vector<std::string> data;
  std::string line;
  std::ifstream file;
        
  file.open( filepath );

  while ( getline( file , line ) ) {
    data.push_back( line );
  }

  file.close();  

  return data;

}

void save_data( std::string filepath, std::vector<std::string> data ) { //Function to save data to a file. Mostly used by room.h.

  std::ofstream file;
        
  file.open( filepath );

  for (int i=0; i<data.size(); i++) {
    file << data[i] << std::endl;
  }
        
  file.close();

}

void print_graphic( std::string filepath ) { //Function to print ASCII text graphic from file.

  std::vector<std::string> title_card = read_data( filepath );

  for (int i=0; i<title_card.size(); i++) {
    std::cout << title_card[i] << std::endl;
  }

}
