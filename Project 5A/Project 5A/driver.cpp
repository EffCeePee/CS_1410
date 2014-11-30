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
#include <fstream>

using namespace std;
using std::ios;

// set prototypes

// The print check function
// Purpose: test the employee object by printing out the values of the created employee
// Parameters: One employee object
// Returns: none
// ===============================================
void printCheck(const Employee&);

// The Write Data
// Purpose: Writes the employee information to a file
// Parameters: none
// Returns: none
// ===============================================
void writeData();


// The ReadData function
// Purpose: to read the data from a file
// Parameters: take a file name
// Returns: none
// ===============================================
void readData(string);


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


	string fileName = "none";
	int quit = 0;

	ifstream inStream;
	int choice = 0;


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
		// call the write data function
		
		writeData(); 
				
	} else 
	{
		// if the user chose to open 
		if(choice == 2)
		{
			cout << "please enter a file name:";
			cin >> fileName;

			do
			{
				if (fileError(fileName) == true)
				{
					cout << "I'm sorry that file is not working \n\n please enter another name or type exit to quit: ";
					cin >> fileName;
				} 
					if (fileName == "quit")
						{
							quit = 1;
						}
				
				if (fileError(fileName) == false)
				{
					readData(fileName);
				}

			}while(fileError(fileName) == true && quit != 1);

           
			cout << "\n\n";
			// pause for next object
			system("PAUSE");
			// clear screen
			system("CLS");

			//Call the printCheck( ) function for each of the three new objects, just as you did in the previous project.
		}
	}

			// insert a few blank lines
	cout << "\n\n";
	// pause for next object
	system("PAUSE");

	return 0;
}

// Implementation of Print Check funcion
void printCheck(const Employee& emp)
{
	system("CLS");
	// company name
	cout << "****************************** Bountifuls Blunders ****************************" ;
	
	// set formatting
	cout.setf(ios::fixed);
    cout.precision(2);
	cout << "\n\n\nPay to the order of:"<< emp.getName() <<" .....................................$ " << emp.calcPay();


	// print check information
	cout << "\n\n\nBubbles Blundering Credit Union";
	cout << "\n-----------------------------------------------------------------------------";
	cout << "\nHours Worked: " << emp.getHrsWorked();
	cout << "\nHourly Wage: " << emp.getWage();

}

bool fileError(string fileName)
{
	bool status;
	string userfile = fileName;
	ifstream inStream;

	inStream.open(userfile);
	status = inStream.fail();
	
	return status;
	
}

void readData(string fileName)
{
// Create three new Employee objects, using the default Employee constructor.
			Employee Joe;
			Employee Sam;
			Employee Mary;

			int cNum = 0;
			string cName = "nothing";
			string cPhone = "none";
			string cAddress = "none";
			double cWage = 0;
			double cHrs = 0;

			string file = fileName;
			
			ifstream inStream;

			//Open the file that you just saved.
			inStream.open(file);

			//Have each object read itself in from the file.
			inStream >> cNum;
			inStream.ignore();
			getline(inStream, cName);
			getline(inStream, cAddress);
			getline(inStream, cPhone);
			inStream >> cHrs >> cWage;

			// set each variable in the object
			Joe.setEmpNum(cNum);
			Joe.setName(cName);
			Joe.setPhNum(cPhone);
			Joe.setStrAddress(cAddress);
			Joe.setWage(cWage);
			Joe.setHrsWorked(cHrs);
			
			//Call the printCheck( ) function for each of the three new objects, just as you did in the previous project.
			printCheck(Joe);

			// insert a few blank lines
			cout << "\n\n";
			// pause for next object
			system("PAUSE");
			// clear screen
			system("CLS");

			inStream >> cNum;
			inStream.ignore();
			getline(inStream, cName);
			getline(inStream, cAddress);
			getline(inStream, cPhone);
			inStream >> cHrs >> cWage;

			Sam.setEmpNum(cNum);
			Sam.setName(cName);
			Sam.setPhNum(cPhone);
			Sam.setStrAddress(cAddress);
			Sam.setWage(cWage);
			Sam.setHrsWorked(cHrs);
			
			//Call the printCheck( ) function for each of the three new objects, just as you did in the previous project.
			printCheck(Sam);

			// insert a few blank lines
			cout << "\n\n";
			// pause for next object
			system("PAUSE");
			// clear screen
			system("CLS");

			inStream >> cNum;
			inStream.ignore();
			getline(inStream, cName);
			getline(inStream, cAddress);
			getline(inStream, cPhone);
			inStream >> cHrs >> cWage;

			Mary.setEmpNum(cNum);
			Mary.setName(cName);
			Mary.setPhNum(cPhone);
			Mary.setStrAddress(cAddress);
			Mary.setWage(cWage);
			Mary.setHrsWorked(cHrs);
			
			//Call the printCheck( ) function for each of the three new objects, just as you did in the previous project.
			printCheck(Mary);
}