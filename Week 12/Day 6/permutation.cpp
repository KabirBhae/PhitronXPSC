#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (n == a && n == b)
        {
            cout << "Yes\n";
        }
        else if (n - a - b > 1)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}