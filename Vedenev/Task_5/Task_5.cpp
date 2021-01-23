#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    int a_integer, b_integer, result;
    cout << "Ввести число a: ";
    cin >> a;
    cout << endl;
    cout << "Ввести число b: ";
    cin >> b;
    cout << endl;
    a_integer = a;
    b_integer = b;
    result = a_integer / b_integer;
    cout << "Деление целочисленных переменных a / b = " << result << "." << endl;
    if (result % 2 == 0 && result != 0)
    {
        a *= a;
        b *= b;
        cout << "Так как полученное число четное, то a и b возводим в квадрат." << endl;
        cout << "a = " << a << ". b = " << b << "." << endl;
    }
    else
    {
        cout << "Полученное число не четное." << endl;
        cout << "a = " << a << ". b = " << b << "." << endl;
    }
    cin.get();
    return 0;
}