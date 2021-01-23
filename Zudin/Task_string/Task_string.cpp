#include <iostream>
#include <string>;
#include <cctype>;
#include <Windows.h>;
using namespace std;

void counter_letters(string str, char arr[], int number, int &counter)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int a = 0; a < number; a++)
        {
            if ((str[i] == (char)tolower(arr[a]) || str[i] == arr[a]) && str[i] != '\0')
            {
                counter++;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    int counter_vowels = 0;
    int counter_consonants = 0;
    const int number_vowels = 10;
    const int number_consonants = 21;
    char arr_vowels[number_vowels] = { 'А', 'У', 'О', 'Ы', 'И', 'Э', 'Я', 'Ю', 'Е', 'Ё' };
    char arr_consonants[number_consonants] = { 'Б', 'В', 'Г', 'Д', 'Ж', 'З', 'Й', 'К', 'Л', 'М', 'Н', 'П', 'Р', 'С', 'Т', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ' };
    const int number_vowels_en = 6;
    const int number_consonants_en = 20;
    char arr_vowels_en[number_vowels_en] = { 'A', 'E', 'I', 'O', 'U', 'Y' };
    char arr_consonants_en[number_consonants_en] = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z' };
    cout << endl << "Введите строку: ";
    getline(cin, str);
    cout << endl;
    counter_letters(str, arr_vowels, number_vowels, counter_vowels);
    counter_letters(str, arr_consonants, number_consonants, counter_consonants);
    counter_letters(str, arr_vowels_en, number_vowels_en, counter_vowels);
    counter_letters(str, arr_consonants_en, number_consonants_en, counter_consonants);
    cout << "Количество гласных букв = " << counter_vowels << "." << endl;
    cout << "Количество согласных букв = " << counter_consonants << "." << endl;
    cin.get();
    return 0;
}