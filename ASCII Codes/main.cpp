// *******************************************************************************
// Assignment A: ASCII Codes
// Author: Shiladitya Dutta
// Description:
// Displays ASCII characters 0 through 127
// Status: Complete
// Date: February 20, 2013
// ********************************************************************************
#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 127; i++)
    {
        cout << static_cast<char>(i) << + " ";
        if(i%16 == 0 && i != 0)
        {
            cout << endl;
        }
    }
}
