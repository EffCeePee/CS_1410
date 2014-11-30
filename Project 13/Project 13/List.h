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
#include "Node.h"

using namespace std;
using std::ios;
	
// new class employee
class List
{

	// public functions
public:

	
	// Default Constructor
	// Purpose: Initializes the instance variables and information to zero or none
	// Parameters: none
	// Returns: none
	List(void);

	// push back function 
	// Purpose: adds a node to the end of the list with a pointer pointing to it
	// Parameters: node pointer
	// Returns: none
	void push_back(Node*);
	
	// Push front function
	// Purpose: adss a node to the front of the list with a pointer pointing to it
	// Parameters: Node Pointer
	// Returns: none
	void push_front(Node*);

	// the pop back function
	// Purpose: removes the last node in the list
	// Parameters: none
	// Returns: node pointer to this node
	Node * pop_back ();

	// the pop front function
	// Purpose: reoves the first node fro the list
	// Parameters: none
	// Returns: a node pointer to this node
	Node* pop_front();

	// Get first node 
	// Purpose: to get the first pointer in the list
	// Parameters: none
	// Returns: a node pointer at the first of the list
	Node * getFirst() const;

	// Get last node 
	// Purpose: to get the last pointer in the list
	// Parameters: none
	// Returns: a node pointer at the last of the list
	Node * getLast() const;

	// get the counter
	// purpose: get the value of the counter
	// parameter: none
	// return
	int getCounter() const;


	// linked list destructor

	~List(void);


	// private variables
private:

	// these are the private data members for this class

	Node * first;
	Node * last;
	int counter;
	
};

