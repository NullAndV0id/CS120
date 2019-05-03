/////////////////////////
//                     //
// Name: Lachlan Lysne //
// Assignment: Lab #14 //
// Section #: 04       //
// Date: 04/25/2019    //
//                     //
/////////////////////////

struct node {

  std::string name;
  int ID;
  node *next;

  node() {
    
    std::cout << "Please enter a name for this node: ";
    std::cin  >> name;

    std::cout << "Please enter an Id for this node: ";
    std::cin  >> ID;

    next = nullptr;

  }

};

struct linked_list {

  node *head;

  linked_list() {
    head = nullptr; //NEW C++ Standard. If this doesn't compile correctly, uncomment the next line.
    // node *head = NULL;
  }

  bool empty() {
    return ( ( head == nullptr ) ? ( true ) : ( false ) );
  }

  void print() {
    if ( empty() ) {
      std::cout << "This linked list is empty." << std::endl;
    }
    else {
      print( head );
    }
  }

  void print( node *n ) {
    if ( n->next == nullptr ) {
      std::cout << "Name: " << n->name << ", Node ID: " << n->ID << std::endl;
    }
    else {
      std::cout << "Name: " << n->name << ", Node ID: " << n->ID << std::endl;
      print( n->next );
    }
  }

  std::string search( int search_ID ) {

    std::string result = "";
    node *current;

    if ( empty() ) {
      return result;
    }

    current = head;

    while ( !(current == nullptr ) ) {
      if ( current->ID == search_ID ) { return current->name; } ;
      current = current->next;
    }

    return result;

  }

};