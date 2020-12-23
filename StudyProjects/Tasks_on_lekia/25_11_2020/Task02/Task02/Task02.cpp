#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double result;
    int number;
    int string = 1;
    cout << "Ввести размер массива (количество строк массива): ";
    cin >> number;
    cout << endl;
    double ** arr_numbers = new double * [number];
    double* arr_vector = new double[number];
    double* new_arr_vector = new double[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Строка " << string << endl;
        string++;
        arr_numbers[i] = new double[number];
        for (int a = 0; a < number; a++)
        {
            cout << "Ввести вещественное число: ";
            cin >> arr_numbers[i][a];
            cout << endl;
        }
    }
    for (int i = 0; i < number; i++)
    {
        cout << "Ввести вектор: ";
        cin >> arr_vector[i];
        cout << endl;
    }
    for (int i = 0; i < number; i++)
    {
        result = 0;
        for (int a = 0; a < number; a++)
        {
            result += arr_numbers[i][a] * arr_vector[a];
        }
        new_arr_vector[i] = result;
    }
    cout << "Вывод вектора-результата:" << endl;
    for (int i = 0; i < number; i++)
    {
        cout << new_arr_vector[i] << endl;
    }
}