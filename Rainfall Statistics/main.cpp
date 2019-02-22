// *******************************************************************************
// Assignment 2: Rainfall Statistics
// Author: Shiladitya Dutta
// Description:
// Takes amount of rainfall for each month and returns various statistics
// Status: Complete
// Date: March 20, 2018
// ********************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double arr[12];
    string names[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        while(arr[i] < 0)
        {
            cout << "Invalid Input" << endl;
            cin >> arr[i];
        }
    }
    double small = arr[0];
    int smalli = 0;
    double large = arr[0];
    int largei = 0;
    double sum = 0;
    for(int i = 0; i < 12; i++)
    {
        sum += arr[i];
        if(small > arr[i])
        {
            small = arr[i];
            smalli = i;
        }
        else if(large < arr[i])
        {
            large = arr[i];
            largei = i;
        }
    }
    cout << "Highest Amount of Rainfall: " << names[largei] << " - " << fixed << setprecision(2) << large << endl;
    cout << "Lowest Amount of Rainfall: " << names[smalli] << " - " << fixed << setprecision(2) << small << endl;
    cout << "Total Rainfall: " << fixed << setprecision(2) << sum << endl;
    cout << "Average Rainfall: " << fixed << setprecision(2) << sum/12.0 << endl;
    return 0;
}
