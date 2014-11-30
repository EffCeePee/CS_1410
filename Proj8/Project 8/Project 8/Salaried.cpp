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
#include "Salaried.h"
#include "Employee.h"

using namespace std;
using std::ios;




Salaried::Salaried(void)
{
	empNum = 0;
	name = "NULL" ;
	strAddress = "NULL";
	phNum = "NULL";
	double weeklySal =  0;
}


Salaried::Salaried(int eNum, string ename, string sAddress, string pNum, double weeklySalary)
{
	empNum = eNum;
	name = ename;
	strAddress = sAddress;
	phNum = pNum;
	double weeklySal =  weeklySalary;

}


double Salaried::getWeeklySal () const
{
	return weeklySal;
}


void Salaried::setWeeklySal (double weeklySalary) 
{
	weeklySal = weeklySalary;
}


void Salaried::readData (string)
{
}

void Salaried::writeData (string fileName, Salaried emp)
{
	ofstream outStream;

	outStream.open(fileName, ios::app);
	// Write the information for the employee to the outstream object with formatting
	outStream << "\n"<< emp.getEmpNum() << "\n" << emp.getName() << "\n" << emp.getStrAddress() << "\n" << emp.getPhNum() 
	<< "\n" << emp.getWeeklySal();
	// close the file
	outStream.close();
}
}

double Salaried::calPay ()
{
	double netPay = 0;
	double fedDeduction = weeklySal * .20;
	double stateDeduction = weeklySal * .075;
	double bennefitDeduction = weeklySal * .0524;

	netPay = weeklySal - fedDeduction - stateDeduction - bennefitDeduction;

	return netPay;
}

Salaried::~Salaried(void)
{
}
