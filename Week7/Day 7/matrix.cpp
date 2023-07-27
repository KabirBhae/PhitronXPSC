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
        int c = 1, d = 2, maximum = n * n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (c <= maximum)
                {
                    cout << c << " ";
                    c += 2;
                }
                else
                {
                    cout << d << " ";
                    d += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}