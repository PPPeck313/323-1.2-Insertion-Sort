//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "listNode.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class linkedList {
private:
    listNode* listHead;
public:
    linkedList();
    linkedList(linkedList& other);
    void operator=(const linkedList& other);
	~linkedList(); 

    listNode* findSpot(string data);
    bool isCommonWord(string data);
    void listInsert(listNode* Spot, listNode* newNode);
    void debugPrint(ofstream& outFile);
    void printSortedList(ofstream& outFile);
};

#endif