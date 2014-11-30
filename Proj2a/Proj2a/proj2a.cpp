// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Project 2
// Date:  5/17/2013


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
// ________________________________________________________________________



#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cctype>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

// declare constants
const int SCORE_SIZE = 3;
const string GRADES[] = {"A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "Fail"}; 
const int GRADE_SCORES[] = {381,361,341,321,301,281,261,241,221,201,181,180}; 
const int DIVISON = 2;

int main( )
{
	// delcare variables
	int testScores[SCORE_SIZE]; 
	string testString;
	vector<int> hwScores;
	string hwString;
	int hwscore;
	int totalScore = 0;
	int medianIndex;
	int medianScore;
	int gradeIndex = 0;
	string finalGrade;
	

	// give a bit of information about the program
	cout << "Dr DoLittles's Grading Program ----- (by Frank Parry)" ;
	
	// start a loop to gather the exam scores and validate them
	for (int i = 0; i < SCORE_SIZE; i++) 
	{

	// prompt user for first exam score
	cout << "\n\nPlease enter in the score for exam " << i+1 << ": ";

	// read in information as a string to validate it from the user
	getline(cin, testString);

			// start a vailidation loop for as long as each string is
			for(int i = 0; i < testString.length(); i++)
				{
					// check to see if there is a decimal or a negative symbol
					if(testString[i] == '.')
						{
						// if it exists prompt for another score with out them
						cout << "\nSorry please enter a positive number as a score: ";
						// read the information
						getline(cin, testString);
						// reset i = -1 so the loop will start at the beginning
						i = -1;
						// if there is not a negative or a decimal continue validation
						}
					else
					{ 
						if(testString[i] == '-')
						{
						// if it exists prompt for another score with out them
						cout << "\nSorry please enter a positive number as a score: ";
						// read the information
						getline(cin, testString);
						// reset i = -1 so the loop will start at the beginning
						i = -1;
						// if there is not a negative or a decimal continue validation
						} 
						else
						{
							if(!(isdigit (testString[i] )))
							{
							// prompt for new number if the input was invalid
							cout<< "\nSorry please enter a positive number as a score: ";
							// read the information
							getline(cin, testString);
							// reset i = -1 so the loop will start at the beginning
							i = -1;
							}
						}
					}
				}
			// if the information is valid then convert to an integer and store in the array
			istringstream buffer(testString);
			buffer >> testScores[i];
	}

	// Begin a loop to enter in homework scores
	do
	{
		// prompt the user for a home work score
		cout << "\n\nPlease enter a score for a homework assignment (press ctrl-z to quit): ";
		// read in information
		getline(cin, hwString);
		
				// check to see if user wants to quit
				if(cin.eof())
				{
				// if they do then end the loop
					break;
				}
				// move on to validate the input
				else
				{
				// start a loop to validate the input is not a decimal number or a negative number
				for(int i = 0; i < hwString.length(); i++)
					{
						if(hwString[i] == '.')
						{
						// if it negative or decimal prompt for a new number
						cout<< "\nSorry please enter a positive number as a score (press ctrl-z to quit): ";
						// read in input
						getline(cin, hwString);
						// reset loop to start from the begining
						i = -1;
						// if not negative or decimal
						} 
						else 
							{
							if(hwString[i] == '-')
							{
							// if it negative or decimal prompt for a new number
							cout<< "\nSorry please enter a positive number as a score (press ctrl-z to quit): ";
							// read in input
							getline(cin, hwString);
							// reset loop to start from the begining
							i = -1;
							// if not negative or decimal
							}
							else
								{
								// validate the information is a number
								if(!(isdigit (hwString[i] )))
								{
								// if it is not a number then ask for another number
								cout<< "\nSorry please enter a positive number as a score (press ctrl-z to quit): ";
								// read in input
								getline(cin, hwString);
								// reset loop to start from the begining
								i = -1;
								}
							}
						}
					}
				
				// if the information is valid then convert to an integer
				istringstream buffer(hwString);
				buffer >> hwscore;
				// store the information in a vector
				hwScores.push_back(hwscore);
				}
			// make sure that the user didn't end the file 
			}while(!(cin.eof()));
	
	// sort the vector to find the median
	sort(hwScores.begin( ), hwScores.end( ) ); 

	// use logic to find the median score
	// if the size of the vector is odd then it has an exact median
	if (hwScores.size() % DIVISON == 1)
	{
		// find the median
		medianIndex = (hwScores.size() / DIVISON);
		// assign a score based on the index of the vector
		medianScore = hwScores[medianIndex];
	}
	else
	{
		// if the size of the vector is even, then you need to find one of the middle indexes
		medianIndex = (hwScores.size() / DIVISON);
		// calculate the median score based on the two 
		//numbers in the middle of the vector and assign it to the score
		medianScore = (hwScores[medianIndex -1] + hwScores[medianIndex]) / DIVISON;
	}

	// find the total score of the class by adding all the exam scores
	// use a loop to do the addition
	for (int i = 0; i < SCORE_SIZE; i++)
	{
		totalScore += testScores[i];
	}

	// add in the median score
	totalScore += medianScore;

	// use logic to find the index of the grade from the grades score array 

	do
	{   
		if (totalScore < GRADE_SCORES[gradeIndex])
		gradeIndex++;

	}while (totalScore < GRADE_SCORES[gradeIndex]);


	// assign the final grade

	finalGrade = GRADES[gradeIndex];


	// print out the results of the scores and exams

	cout << "\nThe median homework score was: " << medianScore;
	cout << "\n the total points earned was: " << totalScore;
	cout << "\nThe calculated letter grade is: " << finalGrade << "\n";



system("PAUSE");
	return 0;
} // end main