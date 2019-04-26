#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<std::string> text_buffer;
  std::vector<std::string> * text_pointer = &text_buffer;
    
  text_pointer->push_back("This is a test string.");
  std::cout << text_pointer->at(0) << std::endl;

  return 0;

}
