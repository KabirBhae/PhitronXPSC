#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int ans = 0;
        if (a > b)
        {
            while (a > b)
            {
                a -= c;
                b += c;
                ans++;
            }
        }
        else
        {
            while (b > a)
            {
                b -= c;
                a += c;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}