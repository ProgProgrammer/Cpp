﻿#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter number 'x': ";
    cin >> x;
    cout << endl;

    while (x != 0)
    {
        if (x < 0)
        {
            x = -x;
        }
        else if (x > 0 && x < 10)
        {
            x = x * x * x;
        }
        else if (x >= 10 && x < 15)
        {
            x = x * x;
        }
        cout << "x = " << x << endl << endl;
        return 0;
    }
    return 0;
}