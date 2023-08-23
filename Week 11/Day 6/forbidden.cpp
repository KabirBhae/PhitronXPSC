#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "Yes" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << ' ';
            }
            cout << endl;
        }
        else if (x == 1 && k >= 3)
        {
            cout << "Yes" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2 - 1; i++)
            {
                cout << 2 << ' ';
            }
            if (n & 1)
            {
                cout << 3;
            }
            else
            {
                cout << 2;
            }
            cout << endl;
        }
        else if (x == 1 && k == 2)
        {
            if (n & 1)
                cout << "No" << endl;
            else
            {
                cout << "Yes" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << ' ';
                }
                cout << endl;
            }
        }
        else
            cout << "No" << endl;
    }
    return 0;
}