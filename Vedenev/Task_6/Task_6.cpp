#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int answer;
    cout << endl;
    cout << "������� ����� �����: ";
    cin >> number;
    if (number == 0)
    {
        cout << "������� �����.";
    }
    else
    {
        if (number % 2 == 0)
        {
            if (number > 0)
            {
                cout << "������������� ������ �����.";
            }
            else
            {
                cout << "������������� ������ �����.";
            }
        }
        else
        {
            if (number > 0)
            {
                cout << "������������� �������� �����.";
            }
            else
            {
                cout << "������������� �������� �����.";
            }
        }
    }
    cout << endl << endl << "��������� ���� ����� (1 - ��, ��������� - ���)? ";
    cin >> answer;
    if (answer == 1)
    {
        main();
        return 0;
    }
    else
    {
        cin.get();
        return 0;
    }
    return 0;
}