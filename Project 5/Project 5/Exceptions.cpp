// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents:Project 3 classes and objects 
// Date: 5/24/2013


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


#include "Exceptions.h"
#include "Employee.h"

// for prologue see exceptions.h
Exceptions::Exceptions(void)
{
	// set the user input to zero
	int userChoice = 0;
}

int Exceptions::checkUserInput(int newChoice) 
{
	int newChoice;
	do
	{
		if (newChoice != ONE| newChoice != TWO)
		{	
			cout << "I'm sorry, please enter a 1 or 2";
			cin >> newChoice;
		}
				
	}while (newChoice != 1 | newChoice != 2);
		
		return newChoice;

}


