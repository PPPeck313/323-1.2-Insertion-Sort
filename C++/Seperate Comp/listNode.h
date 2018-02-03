//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#ifndef LISTNODE_H
#define LISTNODE_H
#include <iostream>
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

#endif