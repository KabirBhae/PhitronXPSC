#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()
{
    const int size = 1000000 + 2;
    char arr[size];

    // Input using the getline function.
    cin.getline(arr, size);
    char separator = ' ';
    int index_count = 0;

    // Temporary string used to split the string.
    string s;
    
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != separator)
        {
            // Append the char to the temp string.
            s += arr[i];
            index_count++;
        }
        else
        {
            for (int i = 0; i < index_count; i++)
            {
                cout << s[index_count - i - 1];
            }
            cout << " ";
            index_count = 0;
            s.clear();
        }
        i++;
    }
    // for the last word
    for (int i = 0; i < index_count; i++)
    {
        cout << s[index_count - i - 1];
    }
}