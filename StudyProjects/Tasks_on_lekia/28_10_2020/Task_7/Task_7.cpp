#include <iostream>
using namespace std;

int computation()
{
    int x;
    cout << "Enter number 'x': ";
    cin >> x;
    cout << endl;
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

int main()
{
    for (int i = 0; i < 3; i++)
    {
        computation();
    }
    return 0;
}
