#include <iostream>
using namespace std;

const int number = 5;
double arr[number] = {};

double calculation(double arr[], int value)
{
    double num = 0;
    if (value == 2)
    {
        num = 1;
    }
    for (int i = 0; i < number; i++)
    {
        if (value == 1)
        {
            num += arr[i];
        }
        else if (value == 2)
        {
            num *= arr[i];
        }
    }
    if (value == 1)
    {
        num = num / number;
    }
    else if (value == 2)
    {
        num = pow(num, 1.0 / number);
    }
    return num;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double n = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Введите число " << i+1 << ": ";
        cin >> n;
        arr[i] = n;
        cout << endl;
    }
    cout << "Чисел в массиве: " << number << endl;
    int value = 1;
    cout << "Среднее арифметическое = " << calculation(arr, value) << endl;
    value = 2;
    cout << "Среднее геометрическое = " << calculation(arr, value);
    cout << endl << "В обратном порядке: " << endl;
    for (int i = number - 1; i >= 0; i--)
    {
        cout << endl << arr[i] << endl;
    }
    return 0;
}