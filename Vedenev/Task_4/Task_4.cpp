#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double m, a, b;
    cout << "Введите значение переменной 'А': ";
    cin >> a;
    cout << endl;
    cout << "Введите значение переменной 'B': ";
    cin >> b;
    cout << endl;
    m = cos(log(pow(abs(a), b) + 2) + 2 * b) / sin(log(pow(abs(a), b) + 2) + 2 * b);
    cout << "M = " << m;
    cin.get();
    return 0;
}
