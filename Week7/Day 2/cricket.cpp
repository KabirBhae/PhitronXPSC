#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n > m * 36)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}