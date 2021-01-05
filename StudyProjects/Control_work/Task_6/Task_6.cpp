#include <iostream>
using namespace std;
const int array_elements = 3;

void array_output(float(*arr)[array_elements])
{
    for (int b = 0; b < array_elements; b++)
    {
        if (b == 0)
        {
            cout << "[ ";
        }
        else
        {
            cout << "  ";
        }
        for (int c = 0; c < array_elements; c++)
        {
            cout << arr[b][c] << ", ";
        }
        if (b == array_elements - 1)
        {
            cout << "]";
        }
        cout << endl;
    }
}

float average(float (*arr)[array_elements])
{    
    float result;
    float main_line = 0;
    float side_line = 0;
    for (int i = 0; i < array_elements; i++)
    {
        main_line += arr[i][i];
        side_line += arr[i][array_elements - (i + 1)];
    }
    result = (main_line + side_line) / (array_elements + array_elements);
    return result;
}

float minimum_number(float (*arr)[array_elements])
{
    float min_number = arr[0][0];
    for (int i = 0; i < array_elements; i++)
    {
        for (int a = 0; a < array_elements; a++)
        {
            if (arr[i][a] < min_number)
            {
                min_number = arr[i][a];
            }
        }
    }
    return min_number;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float arr[array_elements][array_elements] = {};
    float mean;
    float min_number;
    for (int i = 0; i < array_elements; i++)
    {
        cout << "Ввести число в " << i + 1 << " подмассив." << endl << endl;
        for (int a = 0; a < array_elements; a++)
        {
            cout << "Введите " << a + 1 << " число: ";
            cin >> arr[i][a];
            cout << endl;
        }
    }
    cout << "Вывод введенного двумерного массива:" << endl << endl;
    array_output(arr);
    mean = average(arr);
    cout << endl << "Среднее арифметическое диагональных элементов = " << mean << "." << endl << endl;
    for (int c = 0; c < array_elements - 1; c++)
    {
        for (int d = array_elements - (c + 2); d >= 0; d--)
        {
            if (arr[c][d] > mean)
            {
                arr[c][d] = pow(arr[c][d], 2);
            }
        }
    }
    min_number = minimum_number(arr);
    for (int e = array_elements - 1; e > 0; e--)
    {
        for (int f = array_elements - 1; f > array_elements - (e + 1); f--)
        {
            if (arr[e][f] > mean)
            {
                arr[e][f] = arr[e][f] + min_number;
            }
        }
    }
    cout << "Вывод введенного двумерного массива:" << endl << endl;
    array_output(arr);
}