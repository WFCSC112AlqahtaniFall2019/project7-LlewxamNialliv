#include "Stack.h"

Stack::Stack() { //default constructor
    head = nullptr;
}

void Stack::push_head(Data& Country){
    // push in the head
    Node* node = new Node(Country);
    node -> next = head;
    head = node;
}

bool Stack::pop_head() {

    Node* deletion = head;

    if(head->next = nullptr){ //case of empty set
        return false;
    }

    else{
        head = head->next; //case of non-empty set
        delete (deletion);
        return true;
    }
}