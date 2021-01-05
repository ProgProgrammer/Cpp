#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int h;
    float t = 0;
    cout << "Введите значение высоты от 1 до 46000: ";
    cin >> h;
    cout << endl;
    if (h > 0 && h < 46000)
    {
        if (h < 11000)
        {
            t = 288.16 - 0.00165 * h;
        }
        else if (h >= 11000 && h <= 25000)
        {
            t = 216.66;
        }
        else if (h > 25000)
        {
            t = 216.66 + 0.00276098 * (h - 25000);
        }
    }
    else
    {
        cout << "Высота выходит за пределы допустимых значений. Вычисление невозможно.";
        return 0;
    }
    cout << "Значение абсолютной высоты воздуха T = " << t << endl;
    return 0;
}