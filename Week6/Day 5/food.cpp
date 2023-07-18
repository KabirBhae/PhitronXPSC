#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n * 0.90 < m)
        {
            cout << "ONLINE\n";
        }
        else if (n * 0.90 > m)
            cout << "DINING\n";
        else
            cout << "EITHER\n";
    }
    return 0;
}