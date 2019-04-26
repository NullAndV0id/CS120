#include<iostream>
#include<string>
using namespace std;
// declaration of the pet class
class pet{
   private:
      string name;          // private data member
      string species;       // private data member
      int hunger;           // private data member
      int happy;            // private data member
   
   public:
      pet();                // constructor
      void play();          // public member function
      void feed();          // public member function
      void rest();          // public member function
      void print();         // public member function
      int check_health();   // public member function
};

int main() {
   
   pet pet1;
   int choice;
   int health_check;
   
   do{
       
       pet1.print();
       cout << "What would you like to do with your pet?\n";
       cout << " Play (1) \n Feed (2) \n Rest (3) \n Exit (0) \n";
       cin >> choice;
       
       switch(choice) {
        
        case 1:
           pet1.play();
           break;
        
        case 2:
           pet1.feed();
           break;

        case 3:
          pet1.rest();
          break;
      
      }
      
      health_check = pet1.check_health();
   
   } while(choice != 0 && health_check != 1);
   
   cin.ignore();
   cout << "Press enter to exit." << endl;
   cin.ignore();
   
   return 0;

}

/* Constructor, creates a new pet with starting values. */
pet::pet(){
     
     hunger = 50;
     happy = 50;
    
     cout << "Pet's name? (One word) ";
     cin >> name;
    
     cout << "Pet's species? (One word) ";
     cin >> species;

}
/* Member function play(), allows playing with a pet. */
void pet::play() {
    
    int choice = 0;
    cout << "What should we play?\n";
    cout << " Fetch (1) \n Roll over (2) \n";
    cin >> choice;
    
    switch(choice) {
      
      case(1):
         std::cout << name << " happily ran after a ball." << endl;
         happy += 10;
         hunger += 5;
         break;
      
      case(2):
         std::cout << name << " rolled over for tummy rubs." << endl;
         happy += 5;
         hunger += 1;
         break;
      
      default:
         cout << "Not a valid choice." << endl;
   }

}

/* Member function feed(), allows the user to feed a pet. */
void pet::feed(){
    
    int choice = 0;
    cout << "What should we eat?\n";
    cout << " Candy (1) \n Sandwitch (2) \n";
    cin >> choice;
    
    switch(choice) {
      
      case(1):
         std::cout << name << " happily ate the candy." << endl;
         happy += 10;
         hunger -= 1;
         break;
      
      case(2):
         std::cout << name << " enjoyed the sandwitch." << endl;
         happy += 1;
         hunger -= 10;
         break;
      
      default:
         cout << "Not a valid choice." << endl;
   }

}

/* Member function rest(), allows the user to have their pet sleep. */
void pet::rest(){
    
    int choice = 0;
    cout << "What long should we rest?\n";
    cout << " Nap (1) \n Sleep (2) \n";
    cin >> choice;
    
    switch(choice) {
      
      case(1):
         std::cout << name << " crashed on the couch for a nap." << endl;
         happy += 25;
         hunger += 15;
         break;
      
      case(2):
         std::cout << name << " crawled into bed for a good night's sleep." << endl;
         happy += 50;
         hunger += 40;
         break;
      
      default:
         cout << "Not a valid choice." << endl;
   }

}

/* Member function print(), prints information about a pet. */
void pet::print(){
    
    cout << "\nYour pet " << species << ", " << name << " is: " << endl;;
    cout << "Happy: " << happy << endl;
    cout << "Hungry: " << hunger << endl;

}

/* Member function check_health(), checks the health of a pet. */
int pet::check_health(){
    if(hunger >= 100){
         cout << "\nYour pet has starved.\n";
         return 1;
    }
    if(happy <= 0){
         cout << "\nYour pet has died of a broken heart.\n";
         return 1;
    }
    return 0;
}
