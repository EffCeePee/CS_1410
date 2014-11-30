// Driver for testing your project #13
// Author: Roger deBry
// CS 1410
// Date last modified: March 20, 2013
// ---------------------------------------
#include <iostream>
#include "List.h"
using namespace std;

// the printlist function
// Purpose: Prints out the contents for each Node in the List
// Parameter: A list object, by const reference
// Returns: none
void printList(const List&); 

// the printFirstNode function
// Purpose: Prints out the contents for the 1st Node in the List
// Parameter: A list object, passed by value to test the copy constructor
// Returns: none
void printFirstNode(List);

int main( )
{
	//===============================================
	// PART ONE
	//===============================================
	cout << "\nPart I: push_front and pop_front\n";
	cout << "\n----------------------------------\n";
	List groceries;

	// test push_front function
	groceries.push_front(new Node(1, "gallon", "milk") );
	groceries.push_front(new Node(2, "loaves", "bread") );
	groceries.push_front(new Node(1, "dozen", "eggs" ) );
	groceries.push_front(new Node(1,  "package", "bacon") );

	cout << "\nThe original nodes in the List:\n";
	printList(groceries);
	cout << "\n----------------------------------\n";

	// test push_front function
	cout << "\nAdding to the front of the List:\n";
	cout << "\n----------------------------------\n";
	groceries.push_front(new Node(2, "lbs", "hamburger") );
	groceries.push_front(new Node(1, "dozen", "hamburger buns") );

	printList(groceries);
	cout << "\n----------------------------------\n";

	// test pop-front
	cout << "\nRemoving the first node from the list.\n";
	cout << "\n----------------------------------\n";
	Node* item = groceries.pop_front( );
	cout << "\nPopped " << item->getDescription( ) << " from the list.\n\n";
	printList(groceries);
	if (item != NULL)
		delete item;

	// ===============================================
	// PART TWO: Uncomment this block to test part two
	// ===============================================
	
	cout << "\n----------------------------------\n";
	cout << "\nPart Two: Push_back and pop_back";


	// test push_back
	groceries.push_back(new Node(2, "cans", "orange juice") );
	groceries.push_back(new Node(1, "lb", "swiss cheese") );

	cout << "\nAdding two nodes at the end\n";
	cout << "\n----------------------------------\n";
	printList(groceries);

	// test pop-back
	cout << "\n----------------------------------\n";
	cout << "\nRemove last node from the list\n";
	cout << "\n----------------------------------\n";
	item = groceries.pop_back( );
	cout << "\nPopped " << item->getDescription( ) << " from the list.\n\n";

	printList(groceries);
	if (item != NULL)
		delete item;
	// ============================================
	// end of part two
	// ============================================
	
	// ================================================
	// PART THREE: uncomment this block to test part three
	// ================================================
	
	// create a second list to test assignment
	//cout << "\n\n--------------extra credit------------------\n";
	//cout << "\n\n overloaded assignment operator\n";
	//cout << "The hardware list ...\n";
	//cout << "\n-------------------------------------------\n";
	//List hardware;
	//hardware.push_back(new Node(2, "lbs", "nails") );
	//hardware.push_back( new Node(3, "gals", "white paint") );
	//hardware.push_back(new Node(1, "piece", "plywood") );
	//printList(hardware);
	//hardware = groceries;
	//cout << "\n-------------------------------------------\n";
	//cout << "\nafter assignment";
	//cout << "\n-------------------------------------------\n";
	//printList(hardware);

	//cout << "\n-------------------------------------------\n";
	//cout << "\nTest the copy constructor\n";
	//cout << "\n-------------------------------------------\n";
	//printFirstNode(hardware);

	// ==============================================
	// end of part 3
	// ==============================================
	
	cout << "\n-------------------------------------------\n";
	cout << "\nEnd of Test";
	cout << "\n-------------------------------------------\n";
	system("PAUSE");
	return 0;
}

void printList(const List& theList)
{
	// write your printList code here
	
	Node* list = theList.getFirst();
	int loc = theList.getCounter();

	for(int i = 0; i < loc; i++)
	{
	cout << list ->getQuantityNumber();
	cout << " " << list ->getQuantityName();
	cout << " " << list ->getDescription() << endl;
	

	list = list->getNextNode();

	}

}

void printFirstNode(List theList)
{
	Node* first = theList.getFirst( );
	cout << first->getQuantityNumber( ) << ' ';
	cout << first->getQuantityName( ) << ' ';
	cout << first->getDescription( ) << endl;
}