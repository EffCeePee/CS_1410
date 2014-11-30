// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Lab 4
// Date:  5/30/2013


// I declare that the following source code was written by me, or provided
// by the instructor for this project. I understand that copying
// source code from any other source constitutes cheating, and that I will
// receive a zero grade on this project if I am found in violation of
// this policy.
// ________________________________________________________________________


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

const int SIZE = 100;

int main( )
{

double voltArray[SIZE];
string averageVolts;
double avgVolts = 0;
ifstream dataFile ("voltages.txt");
int count = 0;


do{
if(dataFile.fail())
{
	cout << "Could not open file";
}


getline(dataFile, averageVolts);

istringstream buffer(averageVolts);
			  buffer >> voltArray[count];

avgVolts += voltArray[count];

count++;


}while (!dataFile.eof());

avgVolts = (avgVolts / count);

cout << "the average volts are: " << avgVolts << "\n";




system("PAUSE");
	return 0;
} // end main