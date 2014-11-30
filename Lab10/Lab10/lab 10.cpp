// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: lab 10
// Date:  7/11/13


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
// ________________________________________________________________________


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// set prototypes

// The count "a's" function
// Purpose: count the number of "a's" in a string 
// Parameters: string input by the user
// Returns: the count of A's
// ===============================================
int findIndex (string, string);
int index1 = 0;


// initialize the variables
string str1 = "null";
string str2 = "null";

int main( )
{
	// ask user for a phrase
	cout << "Please enter a phrase: ";

	// store phrase to the variable str
	getline(cin,str1);

	cout << "Please enter another phrase: ";
	getline(cin,str2);

	

	// print out the number of a's and call the function
	cout << "\n\n The number of A's is:  " << findIndex(str1,str2) << "\n\n";

system("PAUSE");
	return 0;
} // end main 


// function Count A's
int findIndex(string str1,string str2)
   {
	   // initialzie the count 
      int index = 0;
    	
	  // test to make sure the string is not empty, the base case
	  if (str1 == "" || str2 == "")
	  {
		  // when the string is empty return the count
		  return -1;
	  }
	  // if the string is not empty test for an a in position 0
      else
	  {		  
		  if(str1[0] == str2[0])
		  {
			 if(str1.substr(0,str2.length()) == str2)
			 {
				 return index;
			 }

			  // if it is an a increase the count
			 index++;
		  }

		  // return the count, with the recursion, the recursive function passes a new string with out the first letter
		  return index + findIndex(str1.substr(1),str2);
      }
   }