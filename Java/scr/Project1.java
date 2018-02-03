//Preston Peck
//CS 323
//September 10, 2016
//Project 1.2

import java.io.*;
import java.util.*;

public class Project1 {
	public static void main(String[] args) {
		try {
			Scanner inFile1 = new Scanner(new FileReader(args[0]));
			Scanner inFile2 = new Scanner(new FileReader(args[1]));
			PrintWriter outFile1 = new PrintWriter(args[2]);
			PrintWriter outFile2 = new PrintWriter(args[3]);
			linkedList CwordlistHead = new linkedList();
			String commonWord;
			while(inFile1.hasNext()) {
				commonWord = inFile1.next();
				listNode spot = CwordlistHead.findSpot(commonWord);
				listNode newNode = new listNode(commonWord);
				CwordlistHead.listInsert(spot, newNode);
				CwordlistHead.debugPrint(outFile1);
			}
			inFile1.close();
			outFile1.println();
			int insertionCnt = 0;
			linkedList textListHead = new linkedList();
			String textWord;
			while(inFile2.hasNext()) {
				textWord = inFile2.next();
				if (CwordlistHead.isCommonWord(textWord) == false) {
					listNode spot = textListHead.findSpot(textWord);
					if (spot != null) {
						listNode newNode = new listNode(textWord);
						textListHead.listInsert(spot, newNode);
						insertionCnt++;
					}
				}
				if (insertionCnt >= 5) {
					textListHead.debugPrint(outFile1);
					insertionCnt = 0;
				}
			}
			inFile2.close();
			outFile1.close();
			textListHead.printSortedList(outFile2);
			outFile2.close();
			
		}
		catch (Exception e) {
			System.out.println(e);
		}
	}
}