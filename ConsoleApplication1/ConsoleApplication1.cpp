// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double x, y;
    cout << "enter the value of x";
    cin >> x;

     y = 5 * sqrt(3 * pow(x, 2) - 1 / 4 * pow(x, 3));
     cout << "the result is " << y << endl;
     return 0;
}

 