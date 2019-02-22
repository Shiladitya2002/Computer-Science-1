//********************************************************************************************************************
// Assignment 2: Cyborg Data Type Sizes
// Author: Shiladitya Dutta
// Description:
// Finds the amount of bytes taken up by char, int, float, and double and outputs values to the console.
//Status: Complete
//Date: January 22, 2018
//********************************************************************************************************************

#include <iostream>
using namespace std;

int main()
{
    cout << "Char:" << sizeof(char)<< " bytes"<<endl;
    cout << "Int: " << sizeof(int)<< " bytes"<<endl;
    cout << "Float: " << sizeof(float)<< " bytes"<<endl;
    cout << "Double: " << sizeof(double)<< " bytes"<<endl;
	return 0;
}
