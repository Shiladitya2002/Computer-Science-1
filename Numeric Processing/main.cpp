// *******************************************************************************
// Assignment C: Numeric Processing
// Author: Shiladitya Dutta
// Description:
// Reads numbers from file and returns average, sum, and number of elements.
// Status: Complete
// Date: February 20, 2013
// ********************************************************************************
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("C:\\Users\\SriBalaji\\Documents\\Downloads\\numbers.txt");
    int nelem = 0;
    int sum = 0;
    if(in.good())
    {
        int tmp;
        while(in>>tmp)
        {
            sum += tmp;
            nelem++;
        }
    }
    else
    {
        cout << "Error Opening File" << endl;
        return 0;
    }
    cout << nelem << endl;
    cout << sum << endl;
    cout << static_cast<double>(sum)/static_cast<double>(nelem) << endl;
}
