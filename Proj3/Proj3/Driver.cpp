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

// using statements
#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

// set prototypes

// The print check function
// Purpose: test the employee object by printing out the values of the created employee
// Parameters: One employee object
// Returns: none
// ===============================================
void printCheck(Employee);


int main()
{
	// declare local variables
	int cNum = 10;
	string cName = "Captain Iron Man";
	string cPhone = "(801) -224-1234";
	string cAddress = "123 N. 456 S. Orem, Utah 84097";
	double cWage = 10.00;
	double cHrs = 45.00;
	int tNum = 25;
	string tName = "Tony Darth Vader";
	string tAddress = "123 4th Street";
	string tPhone = "(801) 123-4567";
	double tWage = 12.00;
	double tHrs = 30.00;


	// set new  employee object
	Employee Capt;

	// Create an Employee object for an employee whose hourly wage is $10.00, and who has worked 45 hours.
	// use and test setters for my driver
	Capt.setEmpNum(cNum);
	Capt.setName(cName);
	Capt.setPhNum(cPhone);
	Capt.setStrAddress(cAddress);
	Capt.setWage(cWage);
	Capt.setHrsWorked(cHrs);
	
	// call print check function
    printCheck(Capt);

	// insert a few blank lines
	cout << "\n\n";
	// pause for next object
	system("PAUSE");
    // clear screen
	system("CLS");


	//Create a second employee object for an employee whose hourly wage is $12.50 and who has worked 30 hours.
	//Using paramaterized constructor
	Employee Tony(tNum, tName, tAddress, tPhone, tWage, tHrs);

	// call print check function
	printCheck(Tony);

	// create a few spaces
	cout << "\n\n";
	system("PAUSE");

	return 0;
}

// Implementation of Print Check funcion
void printCheck(Employee emp)
{
	// company name
	cout << "****************************** Bountifuls Blunders ****************************" ;
	
	// set formatting
	cout.setf(ios::fixed);
    cout.precision(2);
	cout << "\n\n\nPay to the order of:.....................................$ " << emp.calcPay();


	// print check information
	cout << "\n\n\nBubbles Blundering Credit Union";
	cout << "\n-----------------------------------------------------------------------------";
	cout << "\nHours Worked: " << emp.getHrsWorked();
	cout << "\nHourly Wage: " << emp.getWage();

}