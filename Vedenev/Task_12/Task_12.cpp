#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int elements = 0;
    const int n = 5;
    const int m = 2;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int a = 0; a < m; a++)
        {
            cout << "Введите число " << a + 1 << " подмассива " << i + 1 << " массива: ";
            cin >> arr[i][a];
            cout << endl;
        }
    }
    for (int b = 0; b < n; b++)
    {
        for (int c = 0; c < m; c++)
        {
            if (arr[b][c] % 3 == 0)
            {
                elements++;
            }
        }
    }
    cout << "Количество элементов равных '3' = " << elements;
}