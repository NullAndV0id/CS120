struct node {

  std::string identifier;
  int data;
  node *next_item;

  node( std::string id , int d , node *ni ) {
    identifier = id;
    data = d;
    next_item = ni;
  }

};

class linked_list {

public:
  
  node *head;

  linked_list();
  linked_list( node* );
  bool empty();
  node *end();
  node *end( node* );
  void append( node* );

private:

};

linked_list::linked_list() {
  head = nullptr;
}

linked_list::linked_list( node *n ) {
  head = n;
}

bool linked_list::empty() {
  return ( ( head == nullptr ) ? ( true ) : ( false ) );
}

node* linked_list::end() {
  return ( ( empty() ) ? ( head ) : ( end( head ) ) );
}

node* linked_list::end( node *n ) {
  return ( ( n->next_item == nullptr ) ? ( n ) : ( end( n->next_item ) ) );
}

void linked_list::append( node *n ) {
  node* last_node = end();
  last_node->next_item = n;
  n->next_item = nullptr; 
}



