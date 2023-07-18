#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        string s;
        cin >> s;
        if (s[0] == '2' || s[0] == '3')
        {
            cout << "DD/MM/YYYY\n";
            flag = 1;
        }
        else if (s[0] == '1')
        {
            if (!(s[1] == '0' || s[1] == '1' || s[1] == '2'))
            {
                cout << "DD/MM/YYYY\n";
                flag = 1;
            }
        }
        if (flag)
            continue;

        if (s[3] == '2' || s[3] == '3')
        {
            cout << "MM/DD/YYYY\n";
            flag = 1;
        }
        else if (s[3] == '1')
        {
            if (!(s[4] == '0' || s[4] == '1' || s[4] == '2'))
            {
                cout << "MM/DD/YYYY\n";
                flag = 1;
            }
        }
        if (flag)
            continue;
        cout << "BOTH\n";
    }
    return 0;
}