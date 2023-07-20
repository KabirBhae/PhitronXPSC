#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long x;
    cin >> t;
    while (t--)
    {
        cin >> x;

        if (x == 1)
        {
            cout << -1 << endl;
        }
        else if (x > 1 && x <= 1e6)
        {
            cout << 1 << " " << 1 << " " << x - 1 << endl;
        }
        else if (x > 1e6 && x % 1000000 != 0)
            cout << 1000000 << " " << x / 1000000 << " " << x % 1000000 << endl;
        else
            cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000 << endl;
    }
    return 0;
}