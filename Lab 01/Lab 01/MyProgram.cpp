// Lab One Programming Exercise
// CS 1410
// Franklin Colton Parry
// CS 1410 -- 601
// --------------------------

 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
 
int main( )
{
    // declarations
    int age = 0;
    float value = 0;
    string name = "";


	// Here you must supply code that does the following:
    // Your program must work in the order described
    // (you can use the following as pseudo-code):

    // prompt the user to enter their full name
	cout << "\nHello, what is your full name? ";

	// because the input may contain spaces, use the getline function
	getline(cin, name);

    // Prompt the user for their age
	cout << "\nHello, what is your age? ";

    // Get their age and store it in the variable age
	cin >> age;
	
    // Prompt the user for how much money they have
	cout << "\nHow much money do you have? ";

    // Get the amount of money and store it in the variable value
    cin >> value;

	
    // Now display the following:
    // The person's name. You must display the full name
	cout << "\nThank you " << name<< endl;

    //    The person's age
	cout << "\nYou are " << age << " years old.\n" ;

    //    The money the person has. Display a dollar sign and two digits 
    //    after the decimal point.
    
	cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\nand you have $" << value << " in your pocket"  << endl;

	cout << "\nGoodbye .....\n"<< endl;
	system("PAUSE");
    return 0;
}