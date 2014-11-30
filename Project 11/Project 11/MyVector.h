// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents:Project 11
// Date: 7/21/13


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------

#include <iostream>

using namespace std;


class MyVector
{
public:
	
	// Default Constructor
	// Purpose: Initializes the default capacity to 2
	// Parameters: none
	// Returns: none
	MyVector(void);

	// Parameterized Constructor
	// Purpose: Initializes the values set by the driver / program
	// Parameters: a point to set the capacity to n
	// Returns: none
	MyVector(int);


	// Copy Constructor
	// purpose: to coy the vector
	// Paraeters: a MyVector object
	// retruns: none
	MyVector (const MyVector&);

	// Overload the assignent operator
	// purpose: to overload the = assigment operator
	// paramteters:  MyVector Object
	// returns: none 
	MyVector operator= (const MyVector&);

	// get this size of the vector
	// Purpose: retrieves the size of the vector 
	// Parameters: none
	// Returns: the size of the vector
	int size() const;
	
	// Gets the capacity of the vector
	// Purpose: to get the capacity of the vector
	// Parameters: none
	// Returns: the capacity of the vector
	int capacity() const;

	// clear vector 
	// Purpose: resets the vector to capacity to two and the size to zero
	// Parameters: none
	// Returns: none
	void clear();

	// the push back function
	// Purpose: double the size of the vector
	// Parameters: integer to add to teh vector
	// Returns: none
	void push_back(int);

	// gets the element position 
	// Purpose: to see where the position of i is in the vector
	// Parameters: int
	// Returns: an int value
	int at(int) const;


	// default destructor
	// purpose: to remove the vector when not needed
	// parameters: none
	// returns: none
	 ~MyVector(void);

	// private variables
private:

	// these are the private data members for this class

	int vCapacity;
	int *myArray;
	int vSize;
	

	// overloaded << operator - a nonmember
	// make it a friend so it can see the array
	friend ostream& operator<<(ostream& output, const MyVector& vect);
	 
};

