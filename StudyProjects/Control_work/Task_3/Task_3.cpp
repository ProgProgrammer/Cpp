#include <iostream>
#include <cmath>
using namespace std;

void line_output(float result, int array_numbers[], int i)
{
    if (!isinf(result))
    {
        cout << "При 'x' = " << array_numbers[i] << " значение = " << result << ";" << endl;
    }
    else
    {
        cout << "Функцию нельзя вычислить при значении 'x' = " << array_numbers[i] << ";" << endl;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    float result;
    int a;
    const int numbers = 10;
    int array_numbers[numbers] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int i_while = 0;
    int i_do_while = 0;
    cout << "Введите значение 'a': ";
    cin >> a;
    cout << endl;
    cout << "Цикл 'for':" << endl;
    for (int i = 0; i < numbers; i++)
    {
        result = (exp(-a * array_numbers[i]) + exp(a * array_numbers[i])) / (pow(array_numbers[i], 3) - 7 * array_numbers[i] - 6);
        line_output(result, array_numbers, i);
    }
    cout << endl << "Цикл 'while':" << endl;
    while (i_while < numbers)
    {
        result = (exp(-a * array_numbers[i_while]) + exp(a * array_numbers[i_while])) / (pow(array_numbers[i_while], 3) - 7 * array_numbers[i_while] - 6);
        line_output(result, array_numbers, i_while);
        i_while++;
    }
    cout << endl << "Цикл 'do while':" << endl;
    do
    {
        result = (exp(-a * array_numbers[i_do_while]) + exp(a * array_numbers[i_do_while])) / (pow(array_numbers[i_do_while], 3) - 7 * array_numbers[i_do_while] - 6);
        line_output(result, array_numbers, i_do_while);
        i_do_while++;
    } while (i_do_while < numbers);
    return 0;
}