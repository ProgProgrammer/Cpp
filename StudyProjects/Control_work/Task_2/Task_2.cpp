#include <iostream>
using namespace std;

int main()
{
    int x;
    int max_n = 6;
    int result = 0;
    int i_while = 0;
    int i_do_while = 0;
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите значение 'x': ";
    cin >> x;
    cout << endl;
    for (int i = 0; i < max_n; i++)
    {
        result += pow(x * (i + 1) - 1, 3);
    }
    cout << "Переменная n = " << result << endl;
    result = 0;
    while (i_while < max_n)
    {
        result += pow(x * (i_while + 1) - 1, 3);
        i_while++;
    }
    cout << "Переменная n = " << result << endl;
    result = 0;
    do
    {
        result += pow(x * (i_do_while + 1) - 1, 3);
        i_do_while++;
    } while (i_do_while < max_n);
    cout << "Переменная n = " << result << endl;
    return 0;
}