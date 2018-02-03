//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#include "linkedList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

linkedList::linkedList() {
	listHead = new listNode();
}

linkedList::linkedList(linkedList& other) {
	listHead = other.listHead;
}

void linkedList::operator=(const linkedList& other) {
	listHead = other.listHead;
}

linkedList::~linkedList() {
	listNode* spot = listHead;
	while(spot->getNext() != NULL) {
    	listNode* next = spot->getNext();
    	delete spot;
    	spot = next;
	}
	delete spot;
}
	
listNode* linkedList::findSpot(string data) {//won't enter return NULL
	listNode* spot = listHead;	
	while (spot->getNext() != NULL && spot->getNext()->getData().compare(data) < 0) {
		spot = spot->getNext();
		if(spot->getNext() != NULL && spot->getNext()->getData().compare(data) == 0) {
			spot->getNext()->addCount();
			return NULL;
		}
	}
	return spot;
}

bool linkedList::isCommonWord(string data) {
	listNode* spot = listHead;	
	while (spot->getNext() != NULL) {
		spot = spot->getNext();
		if (spot->getData() == data) {
			return true;
		}
	}
	return false;
}
	
void linkedList::listInsert(listNode* Spot, listNode* newNode) {
	newNode->setNext(Spot->getNext());
	Spot->setNext(newNode);
}
	
void linkedList::debugPrint(ofstream& outFile) {
	outFile << "listHead --> (dummy, ";
	listNode* spot = listHead;
	while (spot->getNext() != NULL) {
		spot = spot->getNext();
		outFile << spot->getData() << ") --> (" << spot->getData() << ", ";
	}
	outFile << "null)" << endl << endl;
}

void linkedList::printSortedList(ofstream& outFile) {
	listNode* spot = listHead;
	while (spot->getNext() != NULL) {
		spot = spot->getNext();
		outFile << spot->getData() << " " << spot->getCount() <<endl;
	}
}