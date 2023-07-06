#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;

        if (n > k || k % n != 0)
            cout << "0 0";

        else
        {
            cout << 1 << ' ' << k / n;
        }
        cout << endl;
    }

    return 0;
}
