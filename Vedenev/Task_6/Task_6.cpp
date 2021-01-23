#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int answer;
    cout << endl;
    cout << "Введите целое число: ";
    cin >> number;
    if (number == 0)
    {
        cout << "Нулевое число.";
    }
    else
    {
        if (number % 2 == 0)
        {
            if (number > 0)
            {
                cout << "Положительное четное число.";
            }
            else
            {
                cout << "Отрицательное четное число.";
            }
        }
        else
        {
            if (number > 0)
            {
                cout << "Положительное нечетное число.";
            }
            else
            {
                cout << "Отрицательное нечетное число.";
            }
        }
    }
    cout << endl << endl << "Повторить ввод числа (1 - да, остальное - нет)? ";
    cin >> answer;
    if (answer == 1)
    {
        main();
        return 0;
    }
    else
    {
        cin.get();
        return 0;
    }
    return 0;
}