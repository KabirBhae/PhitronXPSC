#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (n * 5 < x)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}