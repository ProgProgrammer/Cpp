#include <iostream>
using namespace std;

int computations(int a, int b)
{
    int result;
    if (a > b)
    {
        result = a - b;
    }
    else
    {
        result = b - a;
    }
    cout << "Result: " << result;
    return 0;
}

int main()
{
    int a, b, result;
    cout << "Enter number 'a': ";
    cin >> a;
    cout << "Enter number 'b': ";
    cin >> b;
    computations(a, b);
    return 0;
}
