#include <iostream>
#include <cmath>
#include <exception>

using namespace std;

float find_value(int k)
{
    float a;

    if (k <= 0)
    {
        throw logic_error("Error. k <= 0.");
    }

    if (k == 1)
    {
        return 1;
    }
    else if (k == 2)
    {
        return 0;
    }
    else if (k == 3)
    {
        return 1;
    }

    a = find_value(k - 1) * sqrt(abs(find_value(k - 3))) + k * sin(find_value(k - 2));

    return a;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int k;
    int counter = 0;
    int summ = 0;
    int result;
    cout << "Введите значение переменной k: ";
    cin >> k;
    cout << endl;
    int* arr = new int[k];

    for (int i = k; i > 0; i--)
    {
        arr[i - 1] = find_value(i);
        cout << arr[i - 1] << endl;
    }

    for (int a = 0; a < k; a++)
    {
        if (arr[a] % 2 == 0 && arr[a] != 0)
        {
            counter++;
            summ += arr[a];
        }
    }

    delete [] arr;

    if (summ != 0)
    {
        result = summ / counter;
        cout << "Cреднее арифметическое 'n' первых членов с четной целой частью = " << result;
    }
    else
    {
        cout << "Нет четных чисел. Задача будет запущена по новой." << endl;
        main();
    }
    return 0;
}