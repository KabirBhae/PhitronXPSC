#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        if (c <= n)
            cout << c;
        else
            cout << (c - n) * 2 + n;
        cout << endl;
    }
    return 0;
}