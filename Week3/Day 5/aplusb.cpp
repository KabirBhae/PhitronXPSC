#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;
        char a = str[0], b = str[2];

        int c = a - 48, d = b - 48;
        cout << c + d << endl;
    }
}