// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Project 1
// Date:  5/11/2013
// Description:  This program will calculate the tax rate for a given income.


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
//__________________________________________________________________________


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// declare constants
const int SIZE = 4;

// declare variables 
double taxIncome = 0;
string filingStatus;
string dummyValue;
string repeat;
string status;
int count = 3;
double rate[SIZE] = {.023, .033, .052, .075};
int separateFee[SIZE] = {0, 863, 2588, 4313};
int separateBracket[SIZE] ={0, 864, 2589, 4314};
int separateBonus[SIZE] = {0, 25, 85, 181};
int jointFee[SIZE] = {0, 1726, 5176, 8626};
int jointBracket[SIZE] = {0, 1727, 5177, 8627};
int jointBonus[SIZE] = {0, 40, 175, 390};
double tax = 0;

// start main function
int main( )
{
	// progam explination
	cout << "Franklin Colton Parry's Tax Calculator";
	cout << "\nCS 1410 Project #1";

    // begin a loop to calculate multiple tax rates for different incomes
	do
	{
		    
    // prompt the user for an income amount and store it to a variable
	cout << "\n\nHello, what is your taxable income: ";
	cin >> taxIncome;
	
	

	//start a loop to validate the input, first check that it was a number
	do
	{
		// check to make sure cin did not fail
		if(cin.fail())
		{
			// if the user entered an improper value, clear cin and prompt again
		    cin.clear();
			cin >> dummyValue;
			cout << "\nSorry please enter a positive number: ";
			cin >> taxIncome;
		}
	}while (cin.fail());
	
	// next start a loop to validate that it was a postitive number
    do
	{
		if(taxIncome < 0)
		{
			cout << "\nSorry please enter a positive number: ";
			cin >> taxIncome;
		}
	}while (taxIncome < 0);

	// ask the user to put in what status they will be filing under
	cout << "\nPlease enter an 'm' if married and filing joint return,";
	cout << "\nor 's' if filing a single return: ";

	// ignore white space
	cin.ignore();
	// get the input from the user and store it in a variable
	getline(cin, filingStatus);
	
	// start a loop to validate that proper input
	do
	{
		// check to see if cin failed
		if(cin.fail())
		{
			// if cin failed, clear it and prompt again
			cin.clear();
			cin >> dummyValue;
			cout << "\nSorry please enter an 's'for single or 'm' for jointly\n";
			cin >> filingStatus;
		}
	}while (cin.fail());
		
	// start a loop to validate that the user input was in the right format
	do
	{
		// check the imput and if it was incorrect, prompt for correct input
		if(filingStatus != "s" && filingStatus != "m")
		{
			cout << "\nSorry please enter an 's'for single or 'm' for married filing jointly\n";
			cin >> filingStatus;
		}
	}while (filingStatus != "s" && filingStatus != "m");

	
	// use logic to assign a status for s or m
	if (filingStatus == "s")
	{
		status = "seperate";
	}
	else
	{
		status = "joint";
	}
 
	
	// use logic to determine which algorithym to use to calculate the income tax based on filing status
	if(filingStatus == "s")
	{
		// start a loop to go through the various income levels
		do
		{
			// use logic to move through the loop
			if (taxIncome >= separateBracket[count])
			{
			// when the proper conditions exist, calculate the income tax
			tax = ((taxIncome - separateFee[count]) * rate[count]) + separateBonus[count] ;
			}
			// if they correct conditions do not exist, move through the loop
			else
			{
			count--;
			}
		}while (tax == 0);
		
	}

	// use logic to determine which algorithym to use to calculate the income tax based on filing status
		if(filingStatus == "m")
	{
		// start a loop to go through the various income levels
		do
		{
			// use logic to move through the loop
			if (taxIncome >= jointBracket[count])
			{
				// when the proper conditions exist, calculate the income tax
				tax = ((taxIncome - jointFee[count]) * rate[count] + jointBonus[count]) ;
			}

			// if they correct conditions do not exist, move through the loop
			else
			{
				count--;
			}
		}while (tax == 0);
		
	}

	// print out to the console the information the user entered
	// set the formatting
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n Your taxable income is $" <<taxIncome ;
	cout << "\n and you are filing a " <<status << " return" ;
	
	// set the formatting
	cout.setf(ios::fixed);
    cout.precision(2);
	cout << "\n Your income tax will be $" << tax ;

	// prompt user to do another calculation, and store to a variable	
	cout << "\n\nWould you like to calculate another tax ammount (y / n)? " ;
	getline(cin, repeat);
	
	// start a loop to validate that the user input
	do
	{
		// check to see if cin failed
		if(cin.fail())
		{
			// clear cin and prompt again
			cin.clear();
			cin >> dummyValue;
			cout << "\nSorry please enter a 'y' or an 'n' ";
			cin >> repeat;
		}
	}while (cin.fail());
		
	// start a loop to validate the correct imput
	do
	{
		// if the input was incorrect, check it and prompt again
		if(repeat != "y" && repeat != "n")
		{
			cout << "\nSorry please enter a 'y' or an 'n' ";
			cin >> repeat;
		}
	}while (repeat != "y" && repeat != "n");

	if(repeat == "Y")
		count = 3;

	// end of loop to run the program again. 
	}while (repeat == "y");




system("PAUSE");
	return 0;
} // end main