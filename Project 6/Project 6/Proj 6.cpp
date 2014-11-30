// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Project 6
// Date:  6/16/2013


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
// ________________________________________________________________________


#include <iostream>
#include <string>


using namespace std;


	// declare constant sizes
	const int  SIZE_LENGTH = 500;
	const int  SIZE_WIDTH = 30;

int main( )
{

	// declare an array of pointers with the string type, and an array of sentences;
	string  *ptrA [SIZE_WIDTH];
	string  sentence[SIZE_LENGTH];
	// declare and initialize my counter;
	int i = 1;
	
	
	// start a while loop to get the sentences, test make sure the previous entry was not
	// zero to terminate the loop
	while(sentence[i-1] != "0")
	{

		// prompt the user for input
		cout << "\nplease enter a sentence or press 0 to stop: ";

		// initialize the first pointer array element to the address of the first sentence array element
		ptrA[i] = &sentence[i];

		// read in the line from the user and store it using a pointer to sentence array
		getline(cin, *ptrA[i]);

		// increment the counter to move the pointers
		i++;
				
	}

	// tell the user what will come next
	cout << "\nthe sentences in reverse order: \n\n";

	// decrement the counter from the previous loop
	i--;

	//start a loop to print the sentences in reverse order, test to make sure we don't try to access a null space;
	while(sentence[i-1] != "\0")
	{
		// decrement the counter so we don't print a null space
		i--;
		// print out the sentence from the pointer
		cout << *ptrA[i] <<"\n"<<"\n";
			
	}


	
system("PAUSE");  // pause program
	return 0;
} // end main