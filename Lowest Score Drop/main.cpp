// *******************************************************************************
// Assignment C: Lowest Score Drop
// Author: Shiladitya Dutta
// Description:
// Takes average of a set of scores after dropping the lowest score.
// Status: Complete
// Date: March 1, 2018
// ********************************************************************************
#include <iostream>

using namespace std;
void getScore(int&);
void calcAverage(int,int,int,int,int);
void findLowest(int&,int,int,int,int,int);
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    getScore(a);
    getScore(b);
    getScore(c);
    getScore(d);
    getScore(e);
    calcAverage(a,b,c,d,e);
    return 0;

}
void getScore(int& ret)
{
    int tmp;
    cout << "Please enter score:" << endl;
    while(1>0)
    {
        cin >> ret;
        if(ret <= 100 && ret >= 0)
        {
            return;
        }
        cout << "Error" << endl;
    }
}
void calcAverage(int a, int b, int c, int d, int e)
{
    int sum = a+b+c+d+e;
    findLowest(sum,a,b,c,d,e);
    cout << static_cast<double>(sum)/4.0 << "%" << endl;
}
void findLowest(int& sum, int a, int b, int c, int d, int e)
{
    int min = 100000;
    if(a < min)min=a;
    if(b < min)min=b;
    if(c < min)min=c;
    if(d < min)min=d;
    if(e < min)min=e;
    sum -= min;
}

