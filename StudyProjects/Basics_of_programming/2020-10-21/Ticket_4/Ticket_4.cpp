#include <iostream>
using namespace std;

int main()
{
    int number = 3;
    int enter_number;
    cout << "Enter the range as a number.\n";
    cin >> enter_number;
    for (int i = 0; i < enter_number; i++)
    {
        if (i % number == 0 && i != 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}
