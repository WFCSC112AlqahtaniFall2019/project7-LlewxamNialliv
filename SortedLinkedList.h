#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include "LinkedList.h"
using namespace std;

class SortedLinkedList : public LinkedList {

public:
    SortedLinkedList();
    void insertSorted(Data &Data);
};

#endif //PROJECT7_SORTEDLINKEDLIST_H
