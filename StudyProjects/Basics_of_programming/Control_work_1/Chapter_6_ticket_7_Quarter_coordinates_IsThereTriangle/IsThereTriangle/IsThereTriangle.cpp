#include <iostream>
using namespace std;

int checkNumber(int number)
{
    if (number >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int numberQuery()
{
    int a, b, c;
    cout << "Enter a positive number 'a': ";
    cin >> a;
    cout << endl;
    cout << "Enter a positive number 'b': ";
    cin >> b;
    cout << endl;
    cout << "Enter a positive number 'c': ";
    cin >> c;
    cout << endl;
    if (checkNumber(a) == false || checkNumber(b) == false || checkNumber(c) == false)
    {
        cout << "Negative number entered." << endl << endl;
        numberQuery();
    }
    else if (a > 0 && b > 0 && c > 0)
    {
        if (a == b && b == c)
        {
            cout << "The triangle exists. It is equilateral.";
        }
        else
        {
            cout << "The triangle exists.";
        }
        return 0;
    }
    else
    {
        cout << "The triangle does not exist.";
        return 0;
    }
}

int main()
{
    cout << "Is there a triangle with side lengths and give a message about it." << endl;
    numberQuery();
    return 0;
}
