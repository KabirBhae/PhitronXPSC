#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
            cout << "-1";
        else
            for (int i = n; i > 0; i--)
            {
                cout << i << ' ';
            }
        cout << endl;
    }

    return 0;
}