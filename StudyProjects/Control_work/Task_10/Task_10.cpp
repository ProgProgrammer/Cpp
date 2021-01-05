#include <iostream>
using namespace std;

int computation(int number, int i, int size)
{
    int result = number * pow(16, size - (i+1));
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int number = 0;
    int length;
    cout << "Введите размер числа в символах: ";
    cin >> length;
    cout << endl;
    char * str = new char[length];
    cout << "Введите шестнадцатиричное число: " << endl;
    for (int a = 0; a < length; a++)
    {
        cout << "Введите символ " << a+1 << ": ";
        cin >> str[a];
        cout << endl;
    }
    cout << "Десятичное преобразование  = ";
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '0')
        {
            number += computation(0, i, length);
        }
        else if (str[i] == '1')
        {
            number += computation(1, i, length);
        }
        else if (str[i] == '2')
        {
            number += computation(2, i, length);
        }
        else if (str[i] == '3')
        {
            number += computation(3, i, length);
        }
        else if (str[i] == '4')
        {
            number += computation(4, i, length);
        }
        else if (str[i] == '5')
        {
            number += computation(5, i, length);
        }
        else if (str[i] == '6')
        {
            number += computation(6, i, length);
        }
        else if (str[i] == '7')
        {
            number += computation(7, i, length);
        }
        else if (str[i] == '8')
        {
            number += computation(8, i, length);
        }
        else if (str[i] == '9')
        {
            number += computation(9, i, length);
        }
        else if (str[i] == 'A')
        {
            number += computation(10, i, length);
        }
        else if (str[i] == 'B')
        {
            number += computation(11, i, length);
        }
        else if (str[i] == 'C')
        {
            number += computation(12, i, length);
        }
        else if (str[i] == 'D')
        {
            number += computation(13, i, length);
        }
        else if (str[i] == 'E')
        {
            number += computation(14, i, length);
        }
        else if (str[i] == 'F')
        {
            number += computation(15, i, length);
        }
    }
    cout << number << "." << endl;
    cin.get();
    return 0;
}