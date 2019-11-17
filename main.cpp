#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "SortedLinkedList.h"
using namespace std;


int main() {

    cout << "" << endl;

    Data GHG_Emission;
    Stack *mainstack = new Stack;
    Queue *mainqueue = new Queue;
    SortedLinkedList *finalsortedList = new SortedLinkedList;

    ofstream myfile;
    myfile.open("../test.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();

    ifstream inFile; //create input stream and out put streams
    inFile.open("../emission data.csv");

    ofstream stacked;
    stacked.open("../stacked.txt");

    ofstream queued;
    queued.open("../queued.txt");

    ofstream sorted;
    sorted.open("../sorted.txt");

    if (!inFile.is_open()){ // open check for files
        cout << "Fail to open input file" << endl;
        return  1;
    }

    if (!stacked.is_open()){ //different exceptions
        cout << "Fail to open stack file" << endl;
        return 10;
    }

    if (!queued.is_open()){
        cout << "Fail to open queue file" << endl;
        return 100;
    }

    if (!sorted.is_open()){
        cout << "Fail to open sort file" << endl;
        return 1000;
    }

    cout << "All Good." << endl;

    cout << "...Reading emission data.csv..." << endl;

    while (!inFile.eof()) {
        string Country1;
        getline(inFile, Country1, ',');
        string Year1;
        getline(inFile,Year1, ',');
        string GHG_Emission_tonnes1;
        getline(inFile, GHG_Emission_tonnes1, ',');

        int year = stoi(Year1); //turn string into int
        int GHG_E = stoi(GHG_Emission_tonnes1);

        Data nextCountry = Data(Country1, year, GHG_E);

        mainstack -> push_head(nextCountry); //push head for stack

        mainqueue -> enqueue(nextCountry); //push tail for queue

        finalsortedList -> insertSorted(nextCountry); //insert in sorted for sorted list
    }

    cout <<  "Writing data in stack into stacked.txt. by inserting at head" << endl;
    mainstack -> print(stacked);

    cout << "Writing data in queue queued.txt. by inserting at tail" << endl;
    mainqueue -> print(queued);

    cout << "Writing data in sorted linked sorted.txt. sorting by attribute" << endl;
    finalsortedList -> print(sorted);

    while (mainstack -> pop_head());
    while (mainqueue -> dequeue());

    inFile.close ();
    stacked.close();
    queued.close ();
    sorted.close ();

    return 0;
}