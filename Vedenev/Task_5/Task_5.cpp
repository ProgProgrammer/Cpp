#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    int a_integer, b_integer, result;
    cout << "������ ����� a: ";
    cin >> a;
    cout << endl;
    cout << "������ ����� b: ";
    cin >> b;
    cout << endl;
    a_integer = a;
    b_integer = b;
    result = a_integer / b_integer;
    cout << "������� ������������� ���������� a / b = " << result << "." << endl;
    if (result % 2 == 0 && result != 0)
    {
        a *= a;
        b *= b;
        cout << "��� ��� ���������� ����� ������, �� a � b �������� � �������." << endl;
        cout << "a = " << a << ". b = " << b << "." << endl;
    }
    else
    {
        cout << "���������� ����� �� ������." << endl;
        cout << "a = " << a << ". b = " << b << "." << endl;
    }
    cin.get();
    return 0;
}