#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float s;
    const int number = 6;
    float arr_x[number] = {};
    for (int i = 0; i < number; i++)
    {
        cout << "Введите значение переменной 'x" << i + 1 << "': ";
        cin >> arr_x[i];
        cout << endl;
    }
    s = (sin(arr_x[0] + 3.14 / 4) + cos(arr_x[1] + 3.14 / 4)) / (sin(arr_x[2] + 3.14 / 3) + cos(arr_x[3] + 3.14 / 3)) * sqrt(abs(sin(arr_x[4] + 2 * 3.14 / 5) + cos(arr_x[5] + 2 * 3.14 / 5)));
    cout << "S = " << s;
    return 0;
}