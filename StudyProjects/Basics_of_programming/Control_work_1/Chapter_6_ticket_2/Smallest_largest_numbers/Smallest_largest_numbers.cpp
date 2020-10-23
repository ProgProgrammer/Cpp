#include <iostream>
using namespace std;

int number_1, number_2, number_3, double_number_1, double_number_2, double_number_3;
int count_array;
int smallest;
int smallest_i;
string smallest_value = "smallest";
int result_smallest;
int largest;
int largest_i;
string largest_value = "largest";
int result_largest;
int average;
int composition;

void findVariable(int i, string value)
{
    if (i == 0)
    {
        if (value == smallest_value)
        {
            number_1 = (double_number_1 + double_number_2 + double_number_3) / 3;
        }
        else
        {
            number_1 = (double_number_1 * double_number_2 * double_number_3) * 2;
        }
    }
    else if (i == 1)
    {
        if (value == smallest_value)
        {
            number_2 = (double_number_1 + double_number_2 + double_number_3) / 3;
        }
        else
        {
            number_2 = (double_number_1 * double_number_2 * double_number_3) * 2;
        }
    }
    else if (i == 2)
    {
        if (value == smallest_value)
        {
            number_3 = (double_number_1 + double_number_2 + double_number_3) / 3;
        }
        else
        {
            number_3 = (double_number_1 * double_number_2 * double_number_3) * 2;
        }
    }
}

int main()
{
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
    double_number_1 = number_1;
    double_number_2 = number_2;
    double_number_3 = number_3;

    int array[3] = { number_1, number_2, number_3 };
    count_array = sizeof(array) / sizeof(array[0]);
    smallest = largest = array[0];

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
    findVariable(smallest_i, smallest_value);
    findVariable(largest_i, largest_value);
    cout << "1 number: " << number_1 << endl << "2 number: " << number_2 << endl << "3 number: " << number_3;
    return 0;
}