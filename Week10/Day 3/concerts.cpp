#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        long long sum = 0;
        cin >> a >> b >> c;

        sum += a + 2 * b + 3 * c;

        // cout << "ans is ";
        if (sum & 1)
            cout << 1;
        else
            cout << 0;

        cout << endl;
    }
    return 0;
}