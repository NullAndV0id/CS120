/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #13 //
// Section #: 04       //
// Date: 04/19/2019    //
//                     //
/////////////////////////

#include <iostream>
#include <string>

class student {

  private:
    
    std::string name;
    std::string id;
    char grade;

  public:

    student() {

      std::cout << "\nPlease enter new student information: " << std::endl;
      std::cout << "  Name : ";
      std::cin  >> name; 
      std::cout << "  ID   : ";
      std::cin  >> id;
      std::cout << "  Grade: ";
      std::cin  >> grade;

      while ( ( int( grade ) < 65 || int( grade ) > 70 ) || int( grade ) == 69 ) {
        std::cout << "  Invalid grade entered, please try again: ";
        std::cin  >> grade;
      } 

    }
    
    void print_student() {

      std::cout << "\nInformation for stduent ID #" << id << ":" << std::endl;
      std::cout << "  Name : " << name << std::endl;
      std::cout << "  Grade: " << grade << std::endl;

    }

};

int main() {

  int student_count;

  std::cout << "\nHow many students are in your class: ";
  std::cin >> student_count;

  student *students = new student[student_count];

  for ( int i=0; i < student_count; i++ ) {
    ( students + i )->print_student();
  }

  delete [] students;

  return 0;

}
