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
#include <iomanip>
#include <string>
#include <fstream>
#include "Employee.h"

using namespace std;
using std::ios;
class Salaried : public Employee
{
public:

	// Default Constructor
	// Purpose: Initializes the instance variables and information to zero or none
	// Parameters: none
	// Returns: none
	Salaried(void);


	// Parameterized Constructor
	// Purpose: Initializes the default values of the employee
	// Parameters: int employee number, string employee name, string employee address, string employee phone number, double salary
	// Returns: none
	Salaried(int, string, string, string, double);

	// get Weekly Salary
	// Purpose: To get the weekly salary of the emloyee
	// Parameters: none
	// Returns: weeklySal variable
	double getWeeklySal () const;

	// Set Weekly Salary 
	// Purpose: To set the weekly salary variable
	// Parameters: double
	// Returns: none
	void setWeeklySal (double);

	// Read Data from File
	// Purpose: To get the data from a file and create an employee
	// Parameters: string for file path
	// Returns: none
	void readData (ifstream&);

	// Write Data to file 
	// Purpose: To Write the employee data to a file
	// Parameters: none
	// Returns: none
	void writeData (string, Salaried);
	
	// Calculate Pay
	// Purpose: To calculate the net pay 
	// Parameters: none
	// Returns: none
	double calPay () const;


	// Default destructor
	// Purpose: to delete data when necessary
	// Parameters: none
	// Returns: none
	~Salaried(void);


private:

	double weeklySalary;

};

