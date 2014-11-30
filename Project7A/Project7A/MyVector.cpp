// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents:Project 7 dynamic memory
// Date: 6/23/13


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


#include "MyVector.h"


MyVector::MyVector(void)
{
	vCapacity = 2;
	vSize = 0;
	myArray = new int[vCapacity];
}



MyVector::MyVector(int initialCapacity)
{
	vCapacity = initialCapacity;
	vSize = 0;
	myArray = new int[vCapacity];
}



int MyVector::size() const
{
	return vSize;
}

	

int MyVector::capacity() const
{
	return vCapacity;
}

void MyVector::clear()
{
	delete [] myArray;
	vCapacity = 2;
	vSize = 0;
	myArray = new int [vCapacity];

}

void MyVector::push_back(int value)
{

	// test to see if there is room to increase the array
	if (vCapacity == vSize)
	{

		// double the array variable
		int dbl = 2;

		// double the capacity
		vCapacity *= dbl;

		// initialize a temp array
		int *temp =  new int [vCapacity]; 
		
		// copy contents to the new array
		for (int i = 0; i <= vSize; i++)
		{
			temp[i] = myArray[i];
		}

		// delete myArray
		delete [] myArray;

		// create a new array called myArray
		myArray = new int [vCapacity];

		// copy the contents back to my array
		for (int i = 0; i <= vSize; i++)
		{
			myArray[i] = temp[i];
		}

		// delete the temporary array
		delete [] temp;

		// assign new value to myArray
		myArray[vSize] = value;
		vSize++;
		
	}
	

	else 
	{
		myArray[vSize] = value;
		vSize++;
	}

}

int MyVector::at(int loc) const
{
	if (loc > vSize)
	{
		return loc;
	}
	else
	{
		int at = myArray[loc];
		return at;
	}
}


MyVector::~MyVector(void)
{
	delete [] myArray;
	myArray = NULL;
}
