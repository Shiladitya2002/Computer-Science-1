// *******************************************************************************
// Assignment 3C: Geometry Calculator
// Author: Shiladitya Dutta
// Description:
// Provides the area given the dimensions for a circle, rectangle, and triangle.
// Status: Complete
// Date: February 6, 2013
// ********************************************************************************
#include <iostream>
using namespace std;

int main()
{
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Exit" << endl;
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "What is the radius of the circle?" << endl;
            float radius;
            cin >> radius;
            if(radius < 0)
            {
                cout << "Error";
                break;
            }
            cout << "Area: " << 3.14159*radius*radius << endl;
            break;
        case 2:
            float length;
            float width;
            cout << "What is the length of the rectangle?" << endl;
            cin >> length;
            cout << "What is the width of the rectangle?" << endl;
            cin >> width;
            if(length < 0 || width < 0)
            {
                cout << "Error";
                break;
            }
            cout << "Area: " << length*width << endl;
            break;
        case 3:
            float height;
            float base;
            cout << "What is the height of the triangle?" << endl;
            cin >> height;
            cout << "What is the base of the triangle?" << endl;
            cin >> base;
            if(height < 0 || base < 0)
            {
                cout << "Error";
                break;
            }
            cout << "Area: " << height*base*0.5 << endl;
            break;
        case 4:
            break;
        default:
            cout << "Incorrect input" << endl;
    }
    return 0;
}
