struct Node {

  char data;
  Node* next;

  Node( char c ) {
    data = c;
    next = nullptr;
  }

};

struct Stack {

  Node* head;

  Stack() {
    head = nullptr;
  }

  void push( char c ) {
    Node* temp = new Node( c );
    temp->next = head;
    head = temp; 
  }

  char pop() {
    Node* temp_node = head;
    char  temp_char = temp_node->data;
    head = temp_node->next;
    delete temp_node;
    return temp_char;
  }

  bool empty() {
    return ( ( head == nullptr ) ? ( true ) : ( false ) );
  }

};