// *******************************************************************************
// Assignment 3B: Math Tutor
// Author: Shiladitya Dutta
// Description:
// Asks student an addition question and checks their answer.
// Status: Complete
// Date: February 6, 2013
// ********************************************************************************
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    int sans = 0;
    srand(time(0));
    int a1 = rand()%1000+1;
    int a2 = rand()%1000+1;
    cout << "  " << a1 << endl;
    cout << "+ " << a2 << endl;
    cout << "_____" << endl << endl;
    cout << "Print the answer:";
    cin >> sans;
    if(sans == a1+a2)
    {
        cout << "Congratulations, You are correct!";
    }
    else
    {
        cout << "  " << a1 << endl;
        cout << "+ " << a2 << endl;
        cout << "_____" << endl;
        cout << setw(5) << right << a1+a2 << endl;
        cout << "Incorrect";
    }
    return 0;
}

