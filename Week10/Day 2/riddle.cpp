#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << -1 * (n - 1) << ' ' << n << endl;
    }
    return 0;
}