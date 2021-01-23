#include <iostream>
using namespace std;

void output_array(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << i + 1 << " ����� ������� = " << arr[i] << ";" << endl;
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int length;
    cout << "������� ���������� �����: ";
    cin >> length;
    cout << endl;
    int * arr = new int[length];
    for (int i = 0; i < length; i++)
    {
        cout << "������� " << i + 1 << " �����: ";
        cin >> arr[i];
        cout << endl;
    }
    output_array(arr, length);
    for (int a = 0; a < length; a++)
    {
        if (arr[a] % 2 != 0 && (arr[a] < -2 || arr[a] > 6))
        {
            arr[a] += 5;
        }
    }
    output_array(arr, length);
    return 0;
}