// Thirapit "Peter" Siri
// CS2 Section #140
// Assignment 3
/* Given the class definition for abstract datatype LinkedList of string objects,
   the main function of this program can be used to test the implementation of each
   member function belonging to the LinkedList class.*/

#include "LinkedList.h"


// default constructor
LinkedList::LinkedList() : head(nullptr)
{
	
}

// copy constructor
LinkedList::LinkedList(const LinkedList& rhs) {
	//head = rhs.head;

	
}

// Destroys all the dynamically allocated memory in the list.
LinkedList::~LinkedList()
{
	while (head!=nullptr)
	{
		Node * terminate = head;
		head = terminate->next;
		delete terminate;
	}
	return;
}

// Inserts val at the rear of the list
void LinkedList::insertToRear(const ItemType &val)
{
	if (head == nullptr) // use addToFront algorithm if list is empty
	{
		Node *p = new Node; // allocate a new node
		p->value = val; // puts a value in the node
		p->next = head; // link new node to old top node
		head = p; // link head pointer to new top node
	}
	else
	{
		// use a temporary variable to traverse to the current last node
		Node *p = head; // start on top
		while (p->next != nullptr)
			p = p->next;

		Node *newbie = new Node; // allocate a new node
		newbie->value = val; // put the value in the node
		p->next = newbie; // link current last node to new one

		newbie->next = nullptr; // link last node to nullptr
	}
}

// Prints the LinkedList
void LinkedList::printList() const
{
	for (int k = 0; k < size(); k++)
	{
		string x; // will hold the node's value
		get(k, x); // sets x to value of node if there is the kth element
		cout << x; // prints the node's value
		if (k == size() - 1)
			break;
		else
			cout << ", ";
	}
	cout << endl;
}

// Sets item to the value at position i in this
// LinkedList and return true, returns false if
// there is no element i
bool LinkedList::get(int i, ItemType& item) const
{
	int pos = 0; // holds position of node

	Node *p = head; // p points to 1st node
	while (p != nullptr && pos < size()) // while p points to a valid node
	{
		if (pos != i)
		{
			p = p->next; // p is the next node's address
			pos++; // change position
		}
		else
		{
			item = p->value; // sets item to node's value
			return true;
		}
	}
	return false;
}

// Reverses the LinkedList
void LinkedList::reverseList()
{
	int SIZE = size(); // holds original list size

	// inserts all the list's nodes in reverse order to the end
	for (int k = SIZE - 1; k >= 0; k--)
	{
		string x; // will hold the node's value
		get(k, x); // sets x to value of node if there is the kth element
		insertToRear(x); 
	}

	// eliminates the chronologically original portion of the list
	for (int l = 0; l < SIZE; l++)
	{
		Node * terminate = head;
		head = terminate->next;
		delete terminate;
	}
}


// Prints the LinkedList in reverse order
void LinkedList::printReverse() const
{
	for (int k = size() - 1; k >= 0; k--)
	{
		string x; // will hold the node's value
		get(k, x); // sets x to value of node if there is the kth element
		cout << x; // prints the node's value
		if (k == 0)
			break;
		else
			cout << ", ";
	}
	cout << endl;
}

// Appends the values of other onto the end of this
// LinkedList.
void LinkedList::append(const LinkedList &other)
{
	for (int k = 0; k < other.size(); k++)
	{
		string x; // holds the value of a node from another list
		other.get(k, x); // gets the target node's value
		insertToRear(x); // inserts val to the end of this list
	}
}


// Exchange the contents of this LinkedList with the other
// one.
void LinkedList::swap(LinkedList &other)
{
	Node* temp = head;
	head = other.head;
	other.head = temp;
	// WOW, THAT WAS SIMPLE.

	printList();
	other.printList();
}


// Returns the number of items in the Linked List.
int LinkedList::size() const
{
	int count = 0;
	Node *p = head; // p points to 1st node
	while (p != nullptr) // while p points to a valid node
	{
		count++;
		p = p->next; // p is the next node's address
	}
	return count;
}
