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
        int k;
        cin >> n >> k;
        if (n > 8 || n * k > 500)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}