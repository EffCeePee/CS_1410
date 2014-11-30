// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Lab 6
// Date: 6/13/13


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
// ________________________________________________________________________


// reverser function
// Purpose: to reverse the character positions in an array
// Parameters: a pointer to a char array
// Returns: none
// Pre-conditions: The pointers is not null
// Post-conditions: none
char reverser(char *phrase);



#include <iostream>
#include <string>
using namespace std;



int main( )
{
	   // declare a c-string to reverse
   char myString[ ] = "Hello world!";
 
   // call the reverser function
   reverser(myString);

   // output the result
   cout << myString << endl;

   

system("PAUSE");
	return 0;
} // end main


char reverser(char* arrayMyString)
{
	int  count = 0;
	char *ptrOne;
	char *ptrTwo;
	char temp;

	ptrOne = arrayMyString;
	ptrTwo = arrayMyString;

	
	
	
		

	do      // loop till we find the null terminator
	{
		count++;
		ptrOne++;
	}	while (*ptrOne != '\0');
		

	for(int i=0; i < count; i++)
	{
		
		
		*arrayMyString = *ptrOne;
		*ptrTwo = *arrayMyString;
		
				
		ptrOne--;		
		ptrTwo++;

		

	}

	
	return *arrayMyString;
	

}
