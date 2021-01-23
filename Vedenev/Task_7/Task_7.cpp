#include <iostream>
using namespace std;

void calculate(int i)
{
    setlocale(LC_ALL, "Russian");
    if (i % 2 == 0 && i != 0)
    {
        cout << "K1 = " << 1 + 12 / i << endl;
    }
    else
    {
        cout << "K2 = " << i * i << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int k = -10;
    int a = k;
    int b = k;
    int number = 10;
    cout << endl << "Цикл 'for':" << endl;
    for (int i = k; i <= number; i++)
    {
        calculate(i);
    }
    cout << endl << "Цикл 'while':" << endl;
    while (a <= number)
    {
        calculate(a);
        a++;
    }
    cout << endl << "Цикл 'do while':" << endl;
    do
    {
        calculate(b);
        b++;
    } while (b <= number);
    return 0;
}