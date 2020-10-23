#include <iostream>
using namespace std;
int a, b, c;

int maxNumber(int value_left, int value_right)
{
    int result;
    result = value_left;

    if (value_right < 0)
    {
        value_right = -value_right;
    }

    if (value_left < value_right)
    {
        result = value_right;
    }

    return result;
}

int minNumber(int value_left, int value_right)
{
    int result;
    result = value_left;

    if (value_left > value_right)
    {
        result = value_right;
    }

    return result;
}

int main()
{
    int left_value, right_value, result;
    cout << "Enter first number: ";
    cin >> a;
    cout << endl;
    cout << "Enter second number: ";
    cin >> b;
    cout << endl;
    cout << "Enter third number: ";
    cin >> c;
    cout << endl;

    left_value = maxNumber(a+b+c, a+b-c);
    right_value = minNumber(a*b, 2*a*c);
    result = maxNumber(left_value, right_value);
    cout << "X = " << result;
    return 0;
}