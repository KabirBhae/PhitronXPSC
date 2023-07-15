#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;

    while (t--)
    {
        cin >> n;
        int arr[n];
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[i] - arr[j]) == 1)
                {
                    ans = 2;
                    break;
                }
            }
        }

        // cout << "ans is ";
        cout << ans << endl;
    }

    return 0;
}