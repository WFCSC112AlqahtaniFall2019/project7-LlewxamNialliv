#include "Queue.h"

Queue::Queue() {
    Latest = nullptr;//starts with a null pointer
}

void Queue::enqueue(Data Data) {
    Node* node = new Node(Data);

    if (head == nullptr){ //case of empty list
        head = node;
        Latest = node;
    }
    else{ //case of non-empty list
        Latest->next=node;
        Latest = node;
    }
}

bool Queue::dequeue() {

    Node* Target = head; //mark head and avoid dangling pointer

    if(head!= nullptr){ //case of non-empty list
        head = head->next;
        Target -> next= nullptr;
        delete Target;
        return true;
    }
    else{ //case of empty list
        return false;
    }
}