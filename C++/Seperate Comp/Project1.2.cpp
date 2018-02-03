#include "linkedList.h"
#include <iostream>
//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
	ifstream inFile1;
	ifstream inFile2;
	ofstream outFile1;
	ofstream outFile2;
    inFile1.open(argv[1]);
    outFile1.open(argv[3]);
    if (!inFile1.is_open()) {
        cerr<<"File failed to open!"<<endl;
        return 0;
    }
	linkedList* CwordlistHead = new linkedList();
	string commonWord;
	while(inFile1 >> commonWord) {
		listNode* spot = CwordlistHead->findSpot(commonWord);
		listNode* newNode = new listNode(commonWord);
		CwordlistHead->listInsert(spot, newNode);    
		CwordlistHead->debugPrint(outFile1);
	}
	outFile1 << endl;
	inFile2.open(argv[2]);
	if (!inFile2.is_open()) {
        cerr<<"File failed to open!"<<endl;
        return 0;
    }
	int insertionCnt = 0;
	linkedList* textListHead = new linkedList();
	string textWord;
	while(inFile2 >> textWord) {
		if (CwordlistHead->isCommonWord(textWord) == false) {
			listNode* spot = textListHead->findSpot(textWord);
			if (spot != NULL) {
				listNode* newNode = new listNode(textWord);
				textListHead->listInsert(spot, newNode);
				insertionCnt++;
			}
		}
		if (insertionCnt == 5) {
			textListHead->debugPrint(outFile1);
			insertionCnt = 0;
		}
	}
	outFile2.open(argv[4]);
	textListHead->printSortedList(outFile2);
    inFile1.close();
	inFile2.close();
    outFile1.close();
	outFile2.close();
}
