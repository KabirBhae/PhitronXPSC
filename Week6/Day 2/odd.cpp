#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    long long n, k;
    while (t--)
    {
        long long odd;
        cin >> n >> k;
        if (2 * k > n)
            cout << "NO\n";
        else
        {
            if (n & 1)
                odd = n / 2 + 1;
            else
                odd = n / 2;
            odd = odd - (k - 1);
            if (odd & 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}