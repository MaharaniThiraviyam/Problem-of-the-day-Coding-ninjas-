//Insertion In A Singly Linked List 
Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    Node* new_node = new Node(val);
   
    if(pos == 0) {
        new_node->next = head;
        return new_node;
    }

    Node* prev = head;
    for(int i=0; i<pos-1 && prev; i++) {
        prev = prev->next;
    }

    //if the linked list exceeds
    if(!prev) {
        return head;
    }

  
    new_node->next = prev->next;
    prev->next = new_node;
    return head;
}
