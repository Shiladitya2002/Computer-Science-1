
// *******************************************************************************
// Assignment 3: Chips and Salsa
// Author: Shiladitya Dutta
// Description:
// Takes amount of sales for each type of salsa and return a sales report
// Status: Complete
// Date: March 20, 2018
// ********************************************************************************
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    string names[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter number of " << names[i] << " jars sold: " << endl;
        cin >> arr[i];
        while(arr[i] < 0)
        {
            cout << "Invalid Input" << endl;
            cin >> arr[i];
        }
    }
    int small = arr[0];
    int smalli = 0;
    int large = arr[0];
    int largei = 0;
    int sum = 0;
    cout << "Sales Report" << endl;
    cout << "----------------------" << endl;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
        cout << names[i] << " " << arr[i] << endl;
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
    cout << "Total Sales: " << sum << endl;
    cout << "Highest Seller: " << names[largei] << endl;
    cout << "Lowest Seller: " << names[smalli] << endl;
    return 0;
}
