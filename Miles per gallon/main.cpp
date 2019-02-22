#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float miles = 0.0;
    float gallons = 0.0;
    cout << "Put the number of gallons in a full tank:" << endl;
    cin >> gallons;
    cout << "Put the maximum number of miles that can be driven on a full tank:" << endl;
    cin >> miles;
    float mpg = miles/gallons;
    cout << setprecision(2) << fixed << mpg << " mpg" << endl;
    return 0;
}
