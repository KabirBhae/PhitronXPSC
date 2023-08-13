#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        char minc = 'z';
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < minc)
            {
                minc = s[i];
            }
        }
        bool flag = 0;
        cout << minc << ' ';
        for (int i = 0; i < s.size(); i++)
        {
            if (flag == 0 && s[i] == minc)
            {
                flag = 1;
            }
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}