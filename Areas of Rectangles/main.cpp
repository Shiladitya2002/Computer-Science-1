// *******************************************************************************
// Assignment 3A: Areas of Rectangle
// Author: Shiladitya Dutta
// Description:
// Compares the area of 2 rectangles and returns which is bigger
// Status: Complete
// Date: February 6, 2013
// ********************************************************************************
#include <iostream>
using namespace std;
int main()
{
    float l1;
    float w1;
    float l2;
    float w2;
    cout << "Length of Rectangle 1: " << endl;
    cin >> l1;
    cout << "Width of Rectangle 1: " << endl;
    cin >> w1;
    cout << "Length of Rectangle 2: " << endl;
    cin >> l2;
    cout << "Width of Rectangle 2: " << endl;
    cin >> w2;
    if(l1*w1 < l2*w2)
    {
        cout << "Rectangle 2 is bigger.";
    }
    else if(l1*w1 > l2*w2)
    {
        cout << "Rectangle 1 is bigger.";
    }
    if(l1*w1 == l2*w2)
    {
        cout << "The areas are equal";
    }
    return 0;
}
