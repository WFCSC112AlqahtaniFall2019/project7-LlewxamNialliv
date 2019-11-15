#include <iostream>
#include <fstream>
#include "SortedLinkedList.h"
#include "LinkedList.h"
#include <string>
using namespace std;

SortedLinkedList :: SortedLinkedList(){}

void SortedLinkedList:: insertSorted(Data& Country) {
    Node *newCountry= new Node(Country);
    if (head == nullptr) {

        head = newCountry;
    }
    else {
        Node * current = head;
        int count = 0;
        Node * previous = nullptr;
        bool IfSorted;
        if (current->data > newCountry->data) {
            newCountry->next = head;
            head = newCountry;
            return;
        }
        previous = current;

        current = current->next;

        while (current) {
            if (newCountry->data > current->data) {
                previous = current;
                current = current->next;
            }
        }

        Node * temp = current;
        newCountry->next = current;
        previous->next = newCountry;

    }
}