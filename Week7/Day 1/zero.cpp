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
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = ans ^ arr[i];
        }
        // cout << "ans is ";
        if ((n & 1) || ans == 0)
        {
            cout << ans << endl;
        }
        else
            cout << "-1\n";
    }
    return 0;
}