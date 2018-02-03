//Preston Peck
//CS 323
//September 10, 2016
//Project 1.2

import java.io.*;

class linkedList {
	listNode listHead;
	
	linkedList() {
		listHead = new listNode();
	}
	
	listNode findSpot(String data) {
		listNode spot = listHead;	
		while (spot.getNext() != null && spot.getNext().getData().compareToIgnoreCase(data) <= 0) {	
			if(spot.getNext().getData().compareToIgnoreCase(data) == 0) {
				spot.getNext().addCount();
				return null;
			}
			spot = spot.getNext();
		}
		return spot;
	}
	
	boolean isCommonWord(String data) {
		listNode spot = listHead;
		while (spot.getNext() != null) {
			spot = spot.getNext();
			if (spot.getData().equals(data)) {
				return true;
			}
		}
		return false;
	}
	
	void listInsert(listNode Spot, listNode newNode) {
		newNode.setNext(Spot.getNext());
		Spot.setNext(newNode);
	}
	
	void debugPrint(PrintWriter outFile) {
		outFile.print("listHead --> (dummy, ");
		listNode spot = listHead;
		while (spot.getNext() != null) {
			spot = spot.getNext();
			outFile.print(spot.getData() + ") --> (" + spot.getData() + ", ");
		}
		outFile.print("null)" + '\n' + '\n');
	}

	void printSortedList(PrintWriter outFile) {
		listNode spot = listHead;
		while (spot.getNext() != null) {
			spot = spot.getNext();
			outFile.print(spot.getData() + " " + spot.getCount() + '\n');
		}
	}
}