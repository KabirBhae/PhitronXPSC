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
        if (n & 1)
            cout << "-1\n";
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i * 2 << ' ' << i * 2 - 1 << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}