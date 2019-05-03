struct Queue_Node {

  int data;
  Queue_Node* next;

  Queue_Node( int n ) {
    data = n;
    next = nullptr;
  }

};

struct Queue {

  Queue_Node* head;

  Queue() {
    head = nullptr;
  }

  Queue_Node* sec_to_last() {
    if ( empty() ) { return head; }
    return sec_to_last( head );
  }

  Queue_Node* sec_to_last( Queue_Node* n ) {
    if ( n->next == nullptr ) { return n; }
    return sec_to_last( n->next );
  }

  void insert( int n ) {
    
    if ( empty() ) {
      head = new Queue_Node( n );
    }

    else {
      Queue_Node* temp = new Queue_Node( n ); // temp -> node_to_insert
      temp->next = sec_to_last()->next;       // node_to_insert.next -> sec_to_last->next ERROR
      sec_to_last()->next = temp;
    }
  
  }

  int remove() {
    Queue_Node* temp_node = head;
    int temp_int = temp_node->data;
    head = temp_node->next;
    delete temp_node;
    return temp_int;
  }

  bool empty() {
    return ( ( head == nullptr ) ? ( true ) : ( false ) );
  }

};