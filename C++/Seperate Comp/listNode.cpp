//Preston Peck
//CS 323-23/700
//September 5, 2016
//Project 1

#include "listNode.h"
#include <string>
using namespace std;

listNode::listNode() {
	data = "";
	count = 0;
	next = NULL;		
}
	
listNode::listNode(string d) {
	data = d;
	count = 0;
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
