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
void hrlyPrintCheck(const Hourly&);

// The print check function
// Purpose: test the employee object by printing out the values of the created employee
// Parameters: One employee object
// Returns: none
// ===============================================
void SalPrintCheck ( const Salaried&);

// The file error function
// Purpose: to check file errors
// Parameters: file name
// Returns: bool value
// ===============================================
bool fileError(string);


const int SIZE = 3; 

Employee* emps[SIZE];


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

		cout << "Please enter a file name (in the same file as your executable): " << endl;

		cin >> fileName;

		
		// create the employee objects


		emps[0] = new Hourly(1, "H. Potter", "Privet Drive", "201-9090", 40, 12.00);
		emps[1] = new Salaried(2, "A. Dumbledore", "Hogewarts", "803-1230", 1200);
		emps[2] = new Hourly(3, "R. Weasley", "The Burrow", "892-2000", 40, 10.00);
		emps[3] = new Salaried(4, "R. Hagrid", "Hogwarts", "910-8765", 1000);

		ofstream outStream;

	    outStream.open(fileName, ios::app);
		// call the write data function
		for (int i = 0; i < SIZE; i++)
		{

		emps[i]->writeData(outStream);
		s1.writeData(fileName, s1); 
		h2.writeData(fileName, h2); 
		s2.writeData(fileName, s2); 


		 if (typeid(*emps[i] ) == typeid(Hourly) ) 
         {
				Hourly* hPtr = (Hourly*)emps[i];  
				hPtr ->writeData(fileName, 
		 }


		}		
		cout << "\n\n" << "The file " << fileName << " has been created." << "\n\n"; 

		system("PAUSE");
				
	} else 
	{
		// if the user chose to open 
		if(choice == 2)
		{
			
           Hourly h1;
		   Hourly h2;
		   Salaried s1;
		   Salaried s2;

		   cout << "Please enter a file name (in the same file as your executable): " << endl;

		   cin >> fileName;

		   // open the file 
		   ifstream inStream;
		   inStream.open(fileName.c_str());


		   // read the file 
		   h1.readData(inStream);
		   s1.readData(inStream);
		   h2.readData(inStream);
		   s2.readData(inStream);
		   
		   
		   // print the checks
		   hrlyPrintCheck(h1);
		   SalPrintCheck(s1);
		   hrlyPrintCheck(h2);
		   SalPrintCheck(s2);


		}
	}

			
	return 0;
}

 //Implementation of Print Check function
void hrlyPrintCheck(const Hourly& emp)
{
	system("CLS");
	// company name
	cout << "****************************** Bountifuls Blunders ****************************" ;
	
	// set formatting
	cout.setf(ios::fixed);
    cout.precision(2);
	cout << "\n\n\nPay to the order of:"<< emp.getName() <<" .....................................$ " << emp.calPay();


	// print check information
	cout << "\n\n\nBubbles Blundering Credit Union";
	cout << "\n-----------------------------------------------------------------------------";
	cout << "\nHours Worked: " << emp.getHrsWorked();
	cout << "\nHourly Wage: " << emp.getHrlyWage() << "\n\n";

	cout << "\n\n" << system("PAUSE");

}


void SalPrintCheck(const Salaried& emp)
{
	system("CLS");
	// company name
	cout << "****************************** Bountifuls Blunders ****************************" ;
	
	// set formatting
	cout.setf(ios::fixed);
    cout.precision(2);
	cout << "\n\n\nPay to the order of:"<< emp.getName() <<" .....................................$ " << emp.calPay();


	// print check information
	cout << "\n\n\nBubbles Blundering Credit Union";
	cout << "\n-----------------------------------------------------------------------------";
	cout << "\nWeekly Salary: " << emp.getWeeklySal() << "\n\n"; 
	
	system("PAUSE");
}



