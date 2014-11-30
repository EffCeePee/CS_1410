#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main( )
{

	string score;
	string dummyString;
	int testScore = -1;
	char testing;

	
	cout << "Dr DoLittles's Grading Program ----- (by Frank Parry)" ;
	

	cout << "\n\nPlease enter in the score for the first exam: " << flush; 
	

	do
	{
	cin.get (testing);
	cout.put (testing);

	}while (testing != '\n');