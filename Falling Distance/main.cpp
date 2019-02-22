// *******************************************************************************
// Assignment B: Falling Distance
// Author: Shiladitya Dutta
// Description:
// Takes time and then returns distance fallen
// Status: Complete
// Date: March 1, 2018
// ********************************************************************************
#include <iostream>
using namespace std;
double fallingDistance(double);
int main()
{
    cout << "Hello world!" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << fallingDistance(static_cast<double>(i)) << " meters" << endl;
    }
    return 0;
}
double fallingDistance(double t)
{
    double g = 9.8;
    return 0.5*g*t*t;
}
