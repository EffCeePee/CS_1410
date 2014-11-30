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
#include "Hourly.h"

using namespace std;
using std::ios;


// set prototypes

// The print check function
// Purpose: test the employee object by printing out the values of the created employee
// Parameters: One employee object
// Returns: none
// ===============================================
void printCheck(const Employee&);


// The file error function
// Purpose: to check file errors
// Parameters: file name
// Returns: bool value
// ===============================================
bool fileError(string);


const int SIZE = 3; 


int main()
{
	// declare local variables

	int choice = 0;
	string fileName = "none";
	
	

	ifstream inStream;
	


	//Presents the user with a menu of choices: create a data file, or read data from a file and print checks. 

	cout << "This program has two options:\n";
	cout << "1 - Create a data file, or\n";
	cout << "2 - Read data from a file and print paychecks.\n";
    cout << "Please enter <1> to create a file or <2> to print checks:";
	cin >> choice;

	//If the user selects the first option, your program should
	
	int checkUserInput(choice);
	//choice = Exceptions.checkUserInput();

	if (choice == 1)
	{

		cout << "Please enter a file name (in the same file as your executable): ";

		getline(cin, fileName);

		// create the employee object
		Hourly h1(1, "H. Potter", "Privet Drive", "201-9090", 40, 12.00);
		Salaried s1(2, "A. Dumbledore", "Hogewarts", "803-1230", 1200);
		Hourly h2(3, "R. Weasley", "The Burrow", "892-2000", 40, 10.00);
		Salaried s2(4, "R. Hagrid", "Hogwarts", "910-8765", 1000);

		// call the write data function
		

		h1.writeData(fileName, h1);
		s1.writeData(fileName, s1); 
		h2.writeData(fileName, h2); 
		s2.writeData(fileName, s2); 

				
		cout << "The file " << fileName << " has been created."; 
				
	} else 
	{
		// if the user chose to open 
		if(choice == 2)
		{
			
           Hourly h1;
		   Hourly h2;
		   Salaried s1;
		   Salaried s2;

		}
	}

			
				cout << "\n\n";
			// pause for next object
	system("PAUSE");
	return 0;
}

// Implementation of Print Check funcion
//void printCheck(const Employee& emp)
//{
//	system("CLS");
//	// company name
//	cout << "****************************** Bountifuls Blunders ****************************" ;
//	
//	// set formatting
//	cout.setf(ios::fixed);
//    cout.precision(2);
//	cout << "\n\n\nPay to the order of:"<< emp.getName() <<" .....................................$ " << emp.calcPay();
//
//
//	// print check information
//	cout << "\n\n\nBubbles Blundering Credit Union";
//	cout << "\n-----------------------------------------------------------------------------";
//	cout << "\nHours Worked: "; //<< emp.getHrsWorked();
//	cout << "\nHourly Wage: "; //<< emp.getWage();
//
//}
//
//bool fileError(string fileName)
//{
//	bool status;
//	string userfile = fileName;
//	ifstream inStream;
//
//	inStream.open(userfile);
//	status = inStream.fail();
//	
//	return status;
//	
//}

