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
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            int ans = 0;
            int balance = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '(')
                    balance++;
                else
                {
                    balance--;
                    if (balance < 0)
                    {
                        balance = 0;
                        ans++;
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}