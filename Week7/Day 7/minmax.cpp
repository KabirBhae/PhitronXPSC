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
        int minimum = 1e8;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minimum = min(minimum, arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > minimum)
            {
                ans++;
            }
        }
        // cout << "ans is ";
        cout << ans << endl;
    }
    return 0;
}