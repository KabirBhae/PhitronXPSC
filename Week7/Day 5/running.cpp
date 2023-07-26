#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, alice, bob;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = 0;
        int alice[n], bob[n];
        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bob[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (bob[i] <= 2 * alice[i])
            {
                if (alice[i] <= 2 * bob[i])
                {
                    ans++;
                }
            }
        }

        // cout << "ans is ";
        cout << ans;
        cout << endl;
    }
    return 0;
}