#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int number;
    int summ = 0;
    const int num = 12;
    int arr_write[num];
    int arr_read[num];
    cout << "¬ведите 12 чисел последовательно." << endl << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "¬ведите число " << i + 1 << ": ";
        cin >> arr_write[i];
        cout << endl;
    }
    ofstream write_file;
    write_file.open("file.txt");
    for (int a = 0; a < num; a++)
    {
        write_file << arr_write[a] << endl;
    }
    write_file.close();
    ifstream read_file;
    read_file.open("file.txt");
    for (int b = 0; b < num; b++)
    {
        read_file >> arr_read[b];
    }
    read_file.close();
    for (int b = 0; b < num; b++)
    {
        if (arr_read[b] % 3 == 0 && arr_read[b] % 2 != 0 && arr_read[b] != 0)
        {
            summ += arr_read[b];
        }
    }
    cout << endl << "—умма числе кратных 3 и не кратных 2 = " << summ << "." << endl;
    cin.get();
    return 0;
}