//Preston Peck
//CS 323
//September 10, 2016
//Project 1.2

public class listNode {
	String data;
	int count;
	listNode next;
	
	listNode() {
		data = null;
		count = 1;
		next = null;
		
	}
	
	listNode(String d) {
		data = d;
		count = 1;
		next = null;
	}
	
	String getData() {
		return data;
	}
	
	void setData(String d) {
		data = d;
	}
	
	int getCount() {
		return count;
	}
	
	void addCount() {
		count = count + 1;
	}
	
	listNode getNext() {
		return next;
	}
	
	void setNext(listNode ln) {
		next = ln;
	}
}