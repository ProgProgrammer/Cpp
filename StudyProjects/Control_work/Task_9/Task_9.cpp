#include <iostream>
#include <fstream>
using namespace std;

void write_file(ofstream& file, float arr[], int number)
{
    for (int i = 0; i < number; i++)
    {
        file << arr[i] << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int k = 0;
    cout << "Ввести количество строк с числами в файле: ";
    cin >> number;
    cout << endl;
    float * arr = new float[number];
    float * arr_read = new float[number];
    float * arr_write = new float[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Введите " << i + 1 << " число: ";
        cin >> arr[i];
        cout << endl;
    }
    ofstream file;
    file.open("file.txt");
    write_file(file, arr, number);
    file.close();
    ifstream file_read;
    file_read.open("file.txt");
    for (int a = 0; a < number; a++)
    {
        file_read >> arr_read[a];
    }
    file_read.close();
    for (int b = 0; b < number; b++)
    {
        if ((b + 1) % 3 == 0 && arr_read[b] > 0)
        {
            k++;
        }
    }
    delete[] arr_read;
    cout << "k = " << k << endl;
    for (int c = 0; c < number; c++)
    {
        if (c + 1 < k)
        {
            arr_write[c] = arr[c];
        }
        else
        {
            arr_write[c] = 1;
        }
    }
    delete[] arr;
    file.open("file2.txt");
    write_file(file, arr_write, number);
    file.close();
    delete[] arr_write;
    return 0;
}