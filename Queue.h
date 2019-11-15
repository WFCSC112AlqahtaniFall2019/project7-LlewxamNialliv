#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include "LinkedList.h"
using namespace std;

class Queue: public LinkedList {
public:
    Queue(); //default constructor

    void enqueue(Data Data);//member function for inserting Data objects to the tail of linked list

    bool dequeue();//member function for removing Data objects from the head of linked list, return true if the list is not empty

private:
    Node* Latest;
};

#endif //PROJECT7_QUEUE_H
