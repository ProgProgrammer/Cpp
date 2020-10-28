#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result;
    cout << "Enter number 'a': ";
    cin >> a;
    cout << endl;
    cout << "Enter number 'b': ";
    cin >> b;
    cout << endl;
    cout << "Enter number 'a': ";
    cin >> c;
    cout << endl;
    result = fmax(a, b);
    result = fmax(result, c);
    cout << "Max number: " << result;
}
