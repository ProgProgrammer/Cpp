#include <iostream>
using namespace std;

int main()
{
    int x, variant;
    cout << "Enter number 'x': ";
    cin >> x;
    cout << endl;
    // Введите действие (1 - квадрат, 2 - куб, 3  - -x,  4 - x + 10) 
    cout << "Actions: \n 1) 1 - x * x; \n 2) 2 - x * x * x; \n 3) 3 - -x; \n 4) 4 - x + 10." << endl << endl;
    cout << "Enter variant: ";
    cin >> variant;
    cout << endl;
    switch (variant)
    {
        case 1:
            x = x * x;
            break;
        case 2:
            x = x * x * x;
            break;
        case 3:
            x = -x;
            break;
        case 4:
            x = x + 10;
            break;
        default:
            x = x;
            break;
    }
    cout << "x = " << x;
    return 0;
}