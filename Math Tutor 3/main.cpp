// *******************************************************************************
// Assignment B: Math Tutor
// Author: Shiladitya Dutta
// Description:
// Quizzes students on various questions
// Status: Complete
// Date: February 20, 2013
// ********************************************************************************
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    while(1>0)
    {
        int ans;
        cout << "1) Addition" << endl;
        cout << "2) Subtraction" << endl;
        cout << "3) Multiplication" << endl;
        cout << "4) Division" << endl;
        cout << "5) Exit" << endl;
        cin >> ans;
        if(ans == 1)
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
                    cout << "Congratulations, You are correct!" << endl;
                }
                else
                {
                    cout << "  " << a1 << endl;
                    cout << "+ " << a2 << endl;
                    cout << "_____" << endl;
                    cout << setw(5) << right << a1+a2 << endl;
                    cout << "Incorrect" << endl;
                }
        }
        else if(ans == 2)
        {
                int sans = 0;
                srand(time(0));
                int a1 = rand()%1000+1;
                int a2 = rand()%1000+1;
                cout << "  " << a1 << endl;
                cout << "- " << a2 << endl;
                cout << "_____" << endl << endl;
                cout << "Print the answer:";
                cin >> sans;
                if(sans == a1-a2)
                {
                    cout << "Congratulations, You are correct!" << endl;
                }
                else
                {
                    cout << "  " << a1 << endl;
                    cout << "- " << a2 << endl;
                    cout << "_____" << endl;
                    cout << setw(5) << right << a1-a2 << endl;
                    cout << "Incorrect" << endl;
                }
        }
        else if(ans == 3)
        {
                int sans = 0;
                srand(time(0));
                int a1 = rand()%1000+1;
                int a2 = rand()%1000+1;
                cout << a1 << "*" << a2 << endl;
                cout << "Print the answer:";
                cin >> sans;
                if(sans == a1*a2)
                {
                    cout << "Congratulations, You are correct!" << endl;
                }
                else
                {
                    cout << a1 << "*" << a2 << "=" << a1*a2 << endl;
                    cout << "Incorrect" << endl;
                }
        }
        else if(ans == 4)
        {
                double sans2 = 0;
                srand(time(0));
                double a12 = rand()%1000+1;
                double a22 = rand()%1000+1;
                cout << a12 << "/" << a22 << endl;
                cout << "Print the answer:";
                cin >> sans2;
                if(sans2 == a12/a22)
                {
                    cout << "Congratulations, You are correct!"<< endl;
                }
                else
                {
                    cout << a12 << "*" << a22 << "=" << a12/a22 << endl;
                    cout << "Incorrect" << endl;
                }
        }
        else if(ans == 5)
        {
                cout << "Thanks for using." << endl;
                return 0;
        }
        else
        {
                cout << "Invalid Input" << endl;
        }
    }
}
