#include <iostream>
using namespace std;

float input_arrays(float arr[], int number, const char * name_array)
{
    for (int i = 0; i < number; i++)
    {
        cout << "Введите " << i + 1 << " элемент массива " << name_array << ": ";
        cin >> arr[i];
        cout << endl;
    }
    return arr[number];
}

float conclution_arrays(float arr[], int number, const char* name_array)
{
    for (int i = 0; i < number; i++)
    {
        cout << i + 1 << " элемент массива " << name_array << " = " << arr[i];
        cout << endl;
    }
    return arr[number];
}

float max_element_array(float arr[], int number, float max_element)
{
    for (int i = 0; i < number; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    return max_element;
}

float division(float arr[], int number, float max_element)
{
    for (int i = 0; i < number; i++)
    {
        arr[i] = arr[i] / max_element;
    }
    return arr[number];
}

float addition_array(float arr1[], float arr2[], float arr3[], int number)
{
    for (int i = 0; i < number; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    return arr3[number];
}

int main()
{
    setlocale(LC_ALL, "russian");
    const int n = 3;
    float x1[n] = {};
    float x2[n] = {};
    float x3[n] = {};
    float max_element = 0;
    x1[n] = input_arrays(x1, n, "x1");
    x2[n] = input_arrays(x2, n, "x2");
    cout << "Элементы массива после ввода: " << endl << endl;
    conclution_arrays(x1, n, "x1");
    conclution_arrays(x2, n, "x2");
    cout << endl;
    max_element = max_element_array(x1, n, max_element);
    max_element = max_element_array(x2, n, max_element);
    x1[n] = division(x1, n, max_element);
    x2[n] = division(x2, n, max_element);
    cout << "Элементы массива после деления: " << endl << endl;
    conclution_arrays(x1, n, "x1");
    conclution_arrays(x2, n, "x2");
    cout << endl;
    x3[n] = addition_array(x1, x2, x3, n);
    cout << "Элементы массива после сложения: " << endl << endl;
    conclution_arrays(x3, n, "x3");
    return 0;
}