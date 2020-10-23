#include <iostream>
using namespace std;
int a, b, c;

int main()
{
    int number_module, left_value, right_value, result;
    cout << "Enter first number: ";
    cin >> a;
    cout << endl;
    cout << "Enter second number: ";
    cin >> b;
    cout << endl;
    cout << "Enter third number: ";
    cin >> c;
    cout << endl;

    number_module = a + b - c;
    if (number_module < 0)
    {
        number_module = -number_module;
    }
    left_value = fmax(a+b+c, number_module);
    right_value = fmin(a*b, 2*a*c);
    result = fmax(left_value, right_value);
    cout << "X = " << result;
    return 0;
}