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
        if (!(n & 1))
        {

            for (int i = 1; i <= n; i++)
            {
                cout << i * 2 << ' ';
            }
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}