#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string pi = "314159265358979323846264338327";
    string str;
    int t, ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == pi[i])
            {
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }
}