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


using namespace std;

const int SIZE = 100;

int main( )
{

double voltArray[SIZE];
double averageVolts;
int count = 0;
ifstream inputStream;
inputStream.open("c:\\voltages.txt");

for (int i = 0; inputStream.fail() != true; i++)
{
inputStream >> voltArray[i];

}

for (int i = 0; i < count; i++)
{
	averageVolts += voltArray[i];
}


averageVolts = (averageVolts / count);

cout << "Average volts is: " << averageVolts;




//ifstream theTextFile("someData.txt");
//     if (theTextFile.fail( ))
//     {
//        cout << "\nFile did not open.";
//        exit (1);
//     }
//     else
//     {
//        while (!theTextFile.eof( ))
//        {
//            theTextFile >> intValue;
//            if (!theTextFile.eof( ))
//                cout << intValue << endl;
//        }
//     }


system("PAUSE");
	return 0;
} // end main