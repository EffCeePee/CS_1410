// File Prologue
// Name: Franklin Colton Parry
// Section: 01
// Project: Lab 02
// Date:  5/11/2013


#include <iostream>
#include <string>

using namespace std;

int main() {

    float f;
    string str;

    cout << "please enter a float :";
    cin >> f;

    cout << "value entered : " << f << endl;

    cout << "stream error : " 
         << (cin.fail() ? "yes" : "no") 
         << endl;

    cin >> str;

    cout << "remaining data : " << str << endl;

}