#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter 'x' coordinate: ";
    cin >> x;
    cout << endl;
    cout << "Enter 'y' coordinate: ";
    cin >> y;
    cout << endl;

    if (x > 0 && y > 0)
    {
        cout << "The point is in the first coordinate plane." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point is in the second coordinate plane." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point is in the third coordinate plane." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point is in the fourth coordinate plane." << endl;
    }
    else
    {
        cout << "The point is on the axis.";
    }
    return 0;
}
