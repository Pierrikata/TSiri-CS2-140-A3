// Thirapit "Peter" Siri
// CS2 Section #140
// Assignment 3
/* Given the class definition for abstract datatype LinkedList of string objects,
   the main function of this program can be used to test the implementation of each
   member function belonging to the LinkedList class.*/

#include "LinkedList.h"
#include <cassert>

int main()
{
	/*LinkedList ls;
	ls.insertToRear("Carl");
	ls.insertToRear("Hariette");
	ls.insertToRear("Eddie");
	ls.insertToRear("Laura");
	ls.insertToRear("Judy");
	ls.insertToRear("Steve");

	for (int k = 0; k < ls.size(); k++)
	{
		string x;
		ls.get(k, x);
		cout << x << endl;
	}*/

	/*LinkedList ls;
	ls.insertToRear("Cory");
	ls.insertToRear("Topanga");
	ls.insertToRear("Shawn");
	ls.insertToRear("Eric");
	ls.printList();
	ls.printReverse();

	ls.~LinkedList();*/

	/*LinkedList e1;
	e1.insertToRear("devoe");
	e1.insertToRear("biv");
	e1.insertToRear("bell");
	LinkedList e2;
	e2.insertToRear("Big Boi");
	e2.insertToRear("Andre");
	e1.append(e2); // adds contents of e2 to the end of e1
	string s;
	assert(e1.size() == 5 && e1.get(3, s) && s == "Big Boi");
	assert(e2.size() == 2 && e2.get(1, s) && s == "Andre");*/

	/*LinkedList e1;
	e1.insertToRear("Norm");
	e1.insertToRear("Cliff");
	e1.insertToRear("Carla");
	e1.insertToRear("Sam");
	e1.reverseList(); // reverses the contents of e1

	e1.printList();

	string s;
	assert(e1.size() == 4 && e1.get(0, s) && s == "Sam");*/

	LinkedList e1;
	e1.insertToRear("D");
	e1.insertToRear("C");
	e1.insertToRear("B");
	e1.insertToRear("A");
	LinkedList e2;
	e2.insertToRear("Z");
	e2.insertToRear("Y");
	e2.insertToRear("X");
	e1.swap(e2); // exchange contents of e1 and e2

	string s;
	assert(e1.size() == 3 && e1.get(0, s) && s == "Z");
	assert(e2.size() == 4 && e2.get(2, s) && s == "B");

	return 0;
}