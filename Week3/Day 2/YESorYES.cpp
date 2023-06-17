#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string str;

    while (t--)
    {
        cin >> str;

        if (str[0] == 'y' || str[0] == 'Y')
        {
            if (str[1] == 'e' || str[1] == 'E')
            {
                if (str[2] == 's' || str[2] == 'S')
                {
                    cout << "Yes\n";
                    continue;
                }
            }
        }

        cout << "No\n";
    }
}