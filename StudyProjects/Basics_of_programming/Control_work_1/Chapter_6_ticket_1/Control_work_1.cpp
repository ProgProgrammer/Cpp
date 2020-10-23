#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter variable 'x': ";
    cin >> x;
    cout << endl;
    cout << "Enter variable 'y': ";
    cin >> y;
    cout << endl;
    cout << "Enter variable 'z': ";
    cin >> z;
    cout << endl;

    if (x % 2 == 0 || y % 2 == 0 || z % 2 == 0)
    {
        if (x % 2 == 0)
        {
            x = x * y * z;
            cout << "Variable 'x' = " << x << endl;
            return 0;
        }
        else if (y % 2 == 0)
        {
            y = x * y * z;
            cout << "Variable 'y' = " << y << endl;
            return 0;
        }
        else if (z % 2 == 0)
        {
            z = x * y * z;
            cout << "Variable 'z' = " << z << endl;
            return 0;
        }
    }
    else
    {
        cout << "All numbers are odd.\n";
    }
}
