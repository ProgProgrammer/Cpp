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
            cout << "������� ����� " << a + 1 << " ���������� " << i + 1 << " �������: ";
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
    cout << "���������� ��������� ������ '3' = " << elements;
}