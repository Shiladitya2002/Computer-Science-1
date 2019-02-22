// *******************************************************************************
// Assignment A: Rectangle Area
// Author: Shiladitya Dutta
// Description:
// Finds area of rectangle given the dimensions.
// Status: Complete
// Date: March 1, 2018
// ********************************************************************************
#include <iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double,double);
void displayData(double,double,double);
int main()
{
    double length;
    double width;
    double area;
    length = getLength();
    width = getWidth();
    area = getArea( length, width );
    displayData( length, width, area );
    return 0;
}
double getLength()
{
    double tmp = 0.0;
    cout << "Please Enter The Length:" << endl;
    cin >> tmp;
    while(tmp < 0.0)
    {
        cout << "Error" << endl;
        cin >> tmp;
    }
    return tmp;
}
double getWidth()
{
    double tmp = 0.0;
    cout << "Please Enter The Width:" << endl;
    cin >> tmp;
    while(tmp < 0.0)
    {
        cout << "Error" << endl;
        cin >> tmp;
    }
    return tmp;
}
double getArea(double length, double width)
{
    return length*width;
}
void displayData(double length, double width, double area)
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}
