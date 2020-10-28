#include <iostream>
using namespace std;

int main()
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

    cout << "x = " << x;
}
