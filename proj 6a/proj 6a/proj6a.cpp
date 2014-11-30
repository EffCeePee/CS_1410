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
	char aray [SIZE_WIDTH] [SIZE_LENGTH];
	int w = 0;
	int l = 0;
	
	cout << "please enter in a sentence or press 0 to stop: ";

	 for (w = 0; aray[w][l] != NULL ; w++)
	 {
		 for (l = 0; aray[w-1][l-1] != NULL; l++)
		 {

			cin >> aray[w][l];
		
		 } 
		 
		 w++;

	 }


	 do
	 {
		 cout <<"something";
		 w--;

	 }while (w >= 0);
	 


	 system("PAUSE");  // pause program
	return 0;
} // end main
