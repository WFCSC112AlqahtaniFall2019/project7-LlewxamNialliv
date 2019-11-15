#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Data.h"
#include <string>
using namespace std;

class Stack : public LinkedList {
public:
    Stack();

    void push_head(Data &obj); // required functions

    bool pop_head();
};

#endif //PROJECT7_STACK_H
