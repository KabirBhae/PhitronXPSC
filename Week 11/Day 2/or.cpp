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
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = ans | arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}