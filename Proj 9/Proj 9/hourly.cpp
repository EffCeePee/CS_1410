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
#include "Hourly.h"
#include "Employee.h"

using namespace std;
using std::ios;




Hourly::Hourly(void)
{
// here we initialize the default values for the instance variables
// in this class

	empNum = 0;
	name = "none";
	strAddress = "none";
	phNum = "none";
	hrsWorked = 0;
	hrlyWage = 0;


}

// this is the parameterized constructor
Hourly::Hourly(int eNum, string ename, string sAddress, string pNum, double hrsWkd, double hrlyWge)
	: Employee()
{
	empNum = eNum;
	name = ename;
	strAddress = sAddress;
	phNum = pNum;
	hrsWorked =  hrsWkd;
	hrlyWage = hrlyWge;

}

double Hourly::getHrlyWage() const 
{
	return hrlyWage;
}

double Hourly::getHrsWorked() const
{
	return hrsWorked;
}


void Hourly::setHrlyWage (double hrlyWge)
{
	hrlyWage = hrlyWge;
}

void Hourly::setHrsWorked(double hrWorked)
{
	hrsWorked = hrWorked;
}


void Hourly::readData (ifstream& inStream)
{
	
	inStream >> empNum;
	inStream.ignore( );  // move past newline
	getline(inStream, name);
	getline(inStream, strAddress);
	getline(inStream, phNum);
	inStream >> hrsWorked;
	inStream >> hrlyWage;
}


void Hourly::writeData (string fileName, emps)
{
	ofstream outStream;

	outStream.open(fileName, ios::app);
		// Write the information for the employee to the outstream object with formatting
		outStream << "\n"<< emp.getEmpNum() << "\n" << emp.getName() << "\n" << emp.getStrAddress() << "\n" << emp.getPhNum() 
		<< "\n" << emp.getHrsWorked() << "\n" << emp.getHrlyWage();
		// close the file
		outStream.close();
}

	
double Hourly::calPay() const
{
	double grossPay = 0; 
	double overtime = 40;
	double timeAndHalf = 1.5;
	double netPay = 0;
	double fedDeduction = .2;
	double deductions = 0;
	double stateDeduction = .075;

	
	if (hrsWorked > overtime)
	{
		grossPay = (hrsWorked * hrlyWage) + ((hrsWorked - overtime) * (hrlyWage * timeAndHalf));
	}
	else
	{
		grossPay = hrsWorked * hrlyWage;
	}

	deductions = (grossPay * fedDeduction) + (grossPay * stateDeduction);

	netPay = grossPay - deductions;

	return netPay;
	
}


Hourly::~Hourly(void)
{
}
