#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        if (k * 2 >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}