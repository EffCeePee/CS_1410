// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents:Project 8 
// Date: 6/28/2013


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


// using statements
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
using std::ios;
	

// new class employee
class Employee
{

	// public functions
public:

	
	// Default Constructor
	// Purpose: Initializes the instance variables and information to zero or none
	// Parameters: none
	// Returns: none
	Employee(void);

	// Parameterized Constructor
	// Purpose: Initializes the number of tokens to values set by the driver / program
	// Parameters: ing employee number, string employee name, string employee address, string employee phone number, double hours worked, double wage 
	// Returns: none
	Employee(int, string, string, string);

	// get Employee Number function
	// Purpose: retrieves the employee number from the variable
	// Parameters: none
	// Returns: employee number as a string
	int getEmpNum() const;
	
	// Get Employee Name function
	// Purpose: retrieves the employee name from the variable
	// Parameters: none
	// Returns: employee name as a string
	string getName() const;

	// get street address function
	// Purpose: gets the street address from the variable
	// Parameters: none
	// Returns: street address as a string
	string getStrAddress() const;

	// get Phone Number function
	// Purpose: gets the phone number from the vairable 
	// Parameters: none
	// Returns: the employee phone number as a string
	string getPhNum() const;

	// Set the employee number
	// Purpose: Initializes the employee number
	// Parameters: integer employee number
	// Returns: none
	void setEmpNum(int);

	// Sets the employee name
	// Purpose: Initializes the employee name
	// Parameters: string employee name
	// Returns: none
	void setName (string);

	// sets the employee street address
	// Purpose: Initializes the the employee street address
	// Parameters: string employee address
	// Returns: none
	void setStrAddress (string);

	// Set Phone number function
	// Purpose: Initializes the employee phone number
	// Parameters: string empoloyee phone number
	// Returns: none
	void setPhNum (string);
	
	// Calcuate Pay
	// Purpose: Calculates the net pay for an employee
	// Parameters: none
	// Returns: a net wage value as a double
	double calcPay() const;


	// Write Data
	// Purpose: to write the data to the file
	// Parameters:  none
	// returns: file output
	void writeData();


	// Read Data
	// purpose: to read in the data from a file
	// Parameters: none
	// retruns none
	void readData ();


	~Employee(void);


	// private variables
protected:

	// these are the private data members for this class
	int empNum;
	string name;
	string strAddress;
	string phNum;


	
			


	
};

