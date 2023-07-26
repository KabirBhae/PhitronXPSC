#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t > 24)
            cout << "YEs\n";
        else
            cout << "No\n";
    }

    return 0;
}