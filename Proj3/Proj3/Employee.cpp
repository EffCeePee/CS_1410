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
	double wage = 0;
	double hrsWorked = 0;

}

// this is the parameterized constructor
Employee::Employee(int eNum,string ename,string sAddress,string pNum,double wages,double hrs)
{
	empNum = eNum;
	name = ename;
	strAddress = sAddress;
	phNum = pNum;
	wage = wages;
	hrsWorked = hrs;
}

// getter functions to set variables

int Employee::getEmpNum()
{
	return empNum;
}


string Employee::getName()
{
	return name;
}

string Employee::getStrAddress()
{
	return strAddress;
}

string Employee::getPhNum()
{
	return phNum;
}

double Employee::getWage()
{
	return wage;
}

double Employee::getHrsWorked()
{
	return hrsWorked;
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

void Employee::setWage(double ewage)
{
	wage = ewage;
}

void Employee::setHrsWorked(double hrWorked)
{
	hrsWorked = hrWorked;
}

// calc pay functions

double Employee::calcPay()
{

	// declare local variables
	double netPay;
	double grossPay;
	double fedTax = .2;
	double stateTax = .075;
	int othrs = 40;
	double otwage = 1.5;


	// determine if overtime exists then determine gross pay minus taxes
	if(hrsWorked > othrs)
	{
		grossPay = (othrs * wage) + ((hrsWorked - othrs)*(wage*otwage));
		netPay = grossPay - ((grossPay * stateTax) + (grossPay * fedTax));
	}
	else
	{
		grossPay = (hrsWorked * wage);
		netPay = grossPay - ((grossPay * stateTax) + (grossPay * fedTax));
	};
		// return the net pay
	return netPay;
}