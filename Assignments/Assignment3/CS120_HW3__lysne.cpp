/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Section #: 04       //
// Due Date: 1/30/2019 //
// Assignment: #3      //
// Exercise: 1         //
//                     //
/////////////////////////

#include <iostream>

int main() { //Function (1)

  // ===== Variable Declaration ===== //
  const double bob_rate = 0.03   ;
        double bob_amount        ;
        double alice_rate        ;
        double alice_amount      ;
        double intial_investment ;
        int    years             ;
  // ================================ //

  std::cout << std::endl << "Please enter your inital investment: $";
  std::cin >> intial_investment;

  if (intial_investment < 1) { 
    intial_investment = 1; 
  }

  
  if (intial_investment < 100) {
    alice_rate = 0.07;
  }

  else if (intial_investment < 300) {
    alice_rate = 0.08;
  }

  else if (intial_investment < 500) {
    alice_rate = 0.09;
  }

  else if (intial_investment < 1000) {
    alice_rate = 0.10;
  }

  else if (intial_investment >= 1000) {
    alice_rate = 0.11;
  }

  else {
    std::cout << "Gratze, you broke the program." << std::endl;
    return 0;
  }

  alice_amount = intial_investment + (intial_investment * alice_rate); 
  bob_amount = intial_investment + (intial_investment * bob_rate);

  std::cout << std::endl << "Your original investment: $" << intial_investment << std::endl;
  std::cout << "Bob's orginal investment: $" << intial_investment << std::endl;

  std::cout << std::endl << "Your interest rate is: " << alice_rate * 100 << "%" << std::endl;
  std::cout << "Bob's interest rate is: " << bob_rate * 100 << "%" << std::endl;

  for (years=1; bob_amount < alice_amount; years++) {
    bob_amount = bob_amount + (bob_amount * bob_rate);
    alice_amount = alice_amount + (intial_investment * alice_rate);
  }

  std::cout << std::endl << "It took " << years << " years for Bob's investment to pass yours." << std::endl;
  std::cout << "Your amount: $" << alice_amount << std::endl;
  std::cout << "Bob's amount: $" << bob_amount << std::endl;

  return 0;

} // End Function (1)
