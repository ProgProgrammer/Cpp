#include <iostream>
using namespace std;

int main()
{
    int number_1, number_2, number_3;
    int count_array;
    int smallest;
    int smallest_i;
    int smallest_value = "smallest";
    int result_smallest;
    int largest;
    int largest_i;
    int largest_value = "largest";
    int result_largest;
    int average;
    int composition;
    cout << "You need to enter 3 numbers." << endl;
    cout << "Enter 1 number: ";
    cin >> number_1;
    cout << endl;
    cout << "Enter 2 number: ";
    cin >> number_2;
    cout << endl;
    cout << "Enter 3 number: ";
    cin >> number_3;
    cout << endl;

    int array[3] = { number_1, number_2, number_3 };
    count_array = sizeof(array) / sizeof(array[0]);
    smallest = largest = array[0];

    void findVariable(int i, int value)
    {
        if (i == 0)
        {
            if (value == smallest_value)
            {
                number_1 = (number_1 + number_2 + number_3) / 2;
            }
            else
            {
                number_1 = (number_1 * number_2 * number_3) * 2;
            }
            return number_1;
        }
        else if (i == 1)
        {
            if (value == smallest_value)
            {
                number_2 = (number_1 + number_2 + number_3) / 2;
            }
            else
            {
                number_2 = (number_1 * number_2 * number_3) * 2;
            }
            return number_2;
        }
        else if (i == 2)
        {
            if (value == smallest_value)
            {
                number_3 = (number_1 + number_2 + number_3) / 2;
            }
            else
            {
                number_3 = (number_1 * number_2 * number_3) * 2;
            }
            return number_3;
        }
    }

    for (int i = 0; i < count_array; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
            smallest_i = i;
        }
        if (largest < array[i])
        {
            largest = array[i];
            largest_i = i;
        }
    }
    result_smallest = findVariable(smallest_i, smallest_value);
    result_largest = findVariable(largest_i, largest_value);
    cout << result_smallest;
    cout << result_largest;
    return 0;
}
