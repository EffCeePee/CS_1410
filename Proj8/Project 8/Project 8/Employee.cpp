// Franklin Colton Parry
// Course: CS 1410 Section 001
// Instructor: Professor deBry
// File: myProgram.cpp
// Contents:Project 5 Exceptions
// Date: 6/29/2013


// I declare that the following source code was written
// solely by me, or provided by the instructor. 
// I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
// -----------------------------------


// using statements
#include "Employee.h"


// functions
// see employee.h for prologues

			


Employee::Employee(void)
{
// here we initialize the default values for the instance variables
// in this class

	int empNum = 0;
	string name = "none";
	string strAddress = "none";
	string phNum = "none";


}

// this is the parameterized constructor
Employee::Employee(int eNum, string ename, string sAddress, string pNum)
{
	empNum = eNum;
	name = ename;
	strAddress = sAddress;
	phNum = pNum;

}

// getter functions to set variables


int Employee::getEmpNum() const
{
	return empNum;
}


string Employee::getName() const
{
	return name;
}

string Employee::getStrAddress() const
{
	return strAddress;
}

string Employee::getPhNum() const
{
	return phNum;
}


// setter functions
void Employee::setEmpNum(int eNum)
{
	empNum = eNum;
}

void Employee::setName(string ename)
{
	name = ename;
}

void Employee::setStrAddress(string sAddress)
{
	strAddress = sAddress;
}

void Employee::setPhNum(string pNum)
{
	phNum = pNum;
}



// calc pay functions

double Employee::calcPay() const
{

	
		
	return 0;
}

 void writeData()
{

}

 

 

Employee::~Employee(void)
{
}
