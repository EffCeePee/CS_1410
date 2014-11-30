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

double Employee::getWage() const 
{
	return wage;
}

double Employee::getHrsWorked() const
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

double Employee::calcPay() const
{

	// declare local variables
	double netPay;
	double grossPay;



	// determine if overtime exists then determine gross pay minus taxes
	if(hrsWorked > OT_HRS)
	{
		grossPay = (OT_HRS * wage) + ((hrsWorked - OT_HRS)*(wage*OT_WAGE));
		netPay = grossPay - ((grossPay * STATE_TAX) + (grossPay * FED_TAX));
	}
	else
	{
		grossPay = (hrsWorked * wage);
		netPay = grossPay - ((grossPay * STATE_TAX) + (grossPay * FED_TAX));
	};
		// return the net pay
	return netPay;
}