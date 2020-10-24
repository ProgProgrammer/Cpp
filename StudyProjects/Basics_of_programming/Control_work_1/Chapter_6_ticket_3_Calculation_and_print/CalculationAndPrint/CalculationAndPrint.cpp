#include <iostream>
using namespace std;

int main()
{
    int x, y, z, q, w, q_value, w_value;
    cout << "Enter value 'x': ";
    cin >> x;
    cout << "Enter value 'y': ";
    cin >> y;
    cout << "Enter value 'z': ";
    cin >> z;

    q_value = fmax(x*y*z, 3*z*x);
    q_value = fmax(q_value, 2*(x+y+z));
    if (z < 0)
    {
        z = -z;
    }
    w_value = fmin(3*x*y*z, q_value / 2);
    printf("q = %d, w = %d", q_value, w_value);
}
