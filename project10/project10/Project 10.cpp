// File Prologue
// Name: Franklin Colton Parry
// Section: 1
// Project: project 10
// Date:  7/14/13


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

// The find Index Function
// Purpose: find the index of the beginning string
// Parameters: 2 strings input by the user
// Returns: the index of a sub string
// ===============================================
int index_of (string, string);


// The find index helper function
// Purpose: find the index of the substring
// Parameters: 2 strings and an integer
// Returns: an integer of an index
// ===============================================
int findIndex (string,string,int);



// initialize the variables
string str1 = "null";
string str2 = "null";
int index = 0;
int notFound = -1;

int main( )
{
	// ask user for a phrase
	cout << "This program will find the ocurence of the one string inside another.";
	cout << "\nEnter the string to be searched: ";

	// store phrase to the variable str
	getline(cin,str1);

	// ask user for the search phrase
	cout << "Now enter the string you want to search for: ";
	getline(cin,str2);

	// call the function to find the index
	index = index_of(str1, str2);

	
		if (index == notFound)
		{
			cout << "Sorry, the string can't be found\n";
		}
	
		// else display the index of the phrase
	
		else
		{
			cout << "The index of the substring is = " << index << "\n\n";
		}
	
	

system("PAUSE");
	return 0;
} // end main 


// function index_of 
int index_of(string str1,string str2)
   {

	   // initialize the variables
	  
	   int str2Length = str2.length();
	   int index1 = 0;

	   // test to see if the strings are empty
	   if (str1 == "" || str2 == "")
	   {
		   // if the strings are empty return 0
		   return 0;
	   }

	   // test to see if the string can exist
	   if (str1.length() < str2.length())
	   {
		   return -1;
	   }

	   else
	   {
			index1 = findIndex(str1, str2, index1);
			return index1;

	   }
}
// end find index



// see method  prologue
int findIndex(string str1, string str2, int index2)
{

	// declare variables
	int str2Length = str2.length();

	// test to see if string can be found 
	if (str1.length() < str2.length())
	{
		return -1;
	}

	// test to see if the first letters in the strings match
	if (str1[0] == str2[0])
		   {

			   // if the first letters match, test to see if the substring can be matched
			   if(str1.substr(0,str2Length) == str2)
			   {
				   // if it is found return the index
				   return index2;
			   }

			   // if the phrases are not the same increase the index
			   // then shorten the string, call the find index function to test the new string
			   else
			   {
				   index2++;

				   // the short string function will shorten the first string
				   string newString = str1.substr(1);
				   return findIndex(newString,str2,index2);
			   }
		   }

		   // if the first letters of the strings are not the same, increase the index and shorten the string
		   // by calling the short string function (helper function), and call the find index function to test the new string
		   else
		   {
			  
			   index2++;
			   string newString = str1.substr(1);
			   return findIndex(newString,str2,index2);
	}
}

	