#include <iostream>
using namespace std;

void element_output(float arr[], int number_elements, int number)
{
    if (number == 2)
    {
        for (int a = 0; a < number_elements; a++)
        {
            cout << "Элемент " << a + 1 << " = " << pow(arr[a], 2) << endl;
        }
    }
    else
    {
        for (int a = 0; a < number_elements; a++)
        {
            cout << "Элемент " << a + 1 << " = " << arr[a] << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int number_elements = 5;
    float arr[number_elements] = {};
    float first_element;
    for (int i = 0; i < number_elements; i++)
    {
        cout << "Ввести " << i + 1 << " число: ";
        cin >> arr[i];
    }
    for (int i = 0; i < number_elements; i++)
    {
        cout << "Вывод " << i + 1 << " числа: " << arr[i] << endl;
    }
    first_element = arr[0];
    for (int a = 0; a < number_elements; a++)
    {
        if (arr[a] > arr[a + 1] && a != number_elements - 1)
        {
            arr[0] = arr[number_elements - 1];
            arr[number_elements - 1] = first_element;
            element_output(arr, number_elements, 1);
            return 0;
        }
    }
    element_output(arr, number_elements, 2);
    return 0;
}