// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// Contents: Project 13
// Date: 8/11/13


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


// using statements
#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::ios;
	


// new class employee
class Node
{

	// public functions
public:

	
	// Default Constructor
	// Purpose: Initializes the instance variables and information to zero or none
	// Parameters: none
	// Returns: none
	Node(void);

	// Parameterized Constructor
	// Purpose: Initializes the number of tokens to values set by the driver / program
	// Parameters: ing employee number, string employee name, string employee address, string employee phone number, double hours worked, double wage 
	// Returns: none
	Node(int, string, string);

	// get Quantity Number 
	// Purpose: retrieves the employee number from the variable
	// Parameters: none
	// Returns: employee number as a string
	int getQuantityNumber() const;
	
	// Get object description
	// Purpose: retrieves the objects description
	// Parameters: none
	// Returns: string that is the objects description
	string getDescription() const;

	// get the unit of measure
	// Purpose: gets the unit of measure for the object
	// Parameters: none
	// Returns: string that is the unit of measure
	string getQuantityName() const;

	// get the next node
	// Purpose: gets the node in the list
	// Parameters: none
	// Returns: Node, the next one in the list
	Node* getNextNode() const;

	// Set the number of units
	// Purpose: Initializes the number units
	// Parameters: integer number of units
	// Returns: none
	void setQuantityNumber(int);

	// Sets the description of the object
	// Purpose: Set the description
	// Parameters: string that describes the object
	// Returns: none
	void setDescription (string);

	// sets the unit of measure
	// Purpose: Initializes the unit of measure
	// Parameters: string, that is a unit of measure 
	// Returns: none
	void setQuantityName (string);

	// Sets the next node
	// Purpose: Moves the pointer to the next node in the list
	// Parameters: node pointer
	// Returns: none
	void setNextNode (Node *);
		
	// linked list destructor

	~Node(void);


	// private variables
private:

	// these are the private data members for this class
	int numUnits;
	string description;
	string measure;
	Node * nextNode;
	
};

