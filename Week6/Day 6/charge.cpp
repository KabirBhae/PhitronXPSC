#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = 0;
        while (n != 50)
        {
            if (n > 50)
            {
                ans++;
                n -= 3;
            }
            else
            {
                n += 2;
                ans++;
            }
        }
        // cout << "ans is ";
        cout << ans;
        cout << endl;
    }
    return 0;
}