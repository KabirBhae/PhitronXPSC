#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, l, o;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> l >> o;
        if (n > m + l + o || m > n + l + o || l > n + m + o || o > n + m + l)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}