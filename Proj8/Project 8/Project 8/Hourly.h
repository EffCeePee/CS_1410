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
#include "Employee.h"


using namespace std;
using std::ios;


class Hourly : public Employee
{
public:
	
	// Default Constructor
	// Purpose: Initializes the instance variables and information to zero or none
	// Parameters: none
	// Returns: none
	Hourly(void);


	// Parameterized Constructor
	// Purpose: Initializes the default values of the employee
	// Parameters: int employee number, string employee name, string employee address, string employee phone number, 
	//			   double hours, double wage
	// Returns: none
	Hourly(int, string, string, string, double, double);

	// get hours worked
	// Purpose: To set the hours worked
	// Parameters: none
	// Returns: hours worked
	double getHrsWorked() const;

	// Set hours worked
	// Purpose: To set the hours worked each week
	// Parameters: double
	// Returns: none
	void setHrsWorked (double);

	// get Hourly Wage of the employee
	// Purpose: To get hourly wage
	// Parameters: none
	// Returns: the wage
	double getHrlyWage () const;

	// Set hourly wage
	// Purpose: To set employee wage
	// Parameters: double
	// Returns: none
	void setHrlyWage (double);

	// Read Data from File
	// Purpose: To get the data from a file and create an employee
	// Parameters: string for file path
	// Returns: none
	void readData (string);

	// Write Data to file 
	// Purpose: To Write the employee data to a file
	// Parameters: none
	// Returns: none
	void writeData (string, Hourly);
	
	// Calculate Pay
	// Purpose: To calculate the net pay 
	// Parameters: none
	// Returns: none
	double calPay ();


	// default destructor
	// purpose to delete uneeded instances 
	// parameters: none
	// returns: none
	~Hourly(void);

private: 
	
	double hrsWorked;
	double hrlyWage;


};

