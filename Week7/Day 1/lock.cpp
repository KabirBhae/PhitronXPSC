#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    int flag = 0;
    int ans;
    for (int i = 0; i < (1 << t); i++)
    {
        ans = 0;
        for (int j = 0; j < t; j++)
        {
            if ((i & (1 << j)) != 0)
                ans += arr[j];
            else
                ans -= arr[j];
        }
        if (ans % 360 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}