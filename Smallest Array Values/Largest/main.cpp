// *******************************************************************************
// Assignment 1: Largest/Smallest Array Value
// Author: Shiladitya Dutta
// Description:
// Takes 10 numbers as input and returns largest and smallest value
// Status: Complete
// Date: March 20, 2018
// ********************************************************************************
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int small = arr[0];
    int large = arr[0];
    for(int i = 0; i < 10; i++)
    {
        if(small > arr[i])small=arr[i];
        else if(large < arr[i])large=arr[i];
    }
    cout << "Largest Number: " << large << endl;
    cout << "Smallest Number: " << small << endl;
    return 0;
}
