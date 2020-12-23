#include <iostream>
using namespace std;

const int number = 100;
char str[number];

int main()
{
    setlocale(LC_ALL, "Russian");
    int num = 0;
    cout << "Ввести символы: ";
    cin.getline(str, number, '\n');
    cout << "Количество введенных символов: " << strlen(str) << endl;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            num++;
        }
    }

    cout << "Количество символов, отличных от пробелов: " << num << endl;

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        cout << str[i] << endl;
    }
}