//Preston Peck
//CS 323
//September 10, 2016
//Project 1.2

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class listNode {
private:
    string data;
	int count;
	listNode* next;
public:
    listNode();
    listNode(string d);
    listNode(listNode& other);
    void operator=(const listNode& other);

    string getData();
    void setData(string d);
    int getCount();
    void addCount();
    listNode* getNext();
    void setNext(listNode* ln);
};

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
		if (insertionCnt >= 5) {
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


listNode::listNode() {
	data = "";
	count = 1;
	next = NULL;		
}
	
listNode::listNode(string d) {
	data = d;
	count = 1;
	next = NULL;
}

listNode::listNode(listNode& other) {
    data = other.data;
	count = other.count;
	next = other.next;	
}

void listNode::operator=(const listNode& other) {
    data = other.data;
	count = other.count;
	next = other.next;	
}
	
string listNode::getData() {
	return data;
}
	
void listNode::setData(string d) {
	data = d;
}
	
int listNode::getCount() {
	return count;
}
	
void listNode::addCount() {
	count = count + 1;
}
	
listNode* listNode::getNext() {
	return next;
}
	
void listNode::setNext(listNode* ln) {
	next = ln;
}


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
	
listNode* linkedList::findSpot(string data) {
	listNode* spot = listHead;	
	while (spot->getNext() != NULL && spot->getNext()->getData().compare(data) <= 0) {
		if(spot->getNext()->getData().compare(data) == 0) {
			spot->getNext()->addCount();
			return NULL;
		}
		spot = spot->getNext();
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
