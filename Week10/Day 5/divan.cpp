#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    int l, r, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> l >> r >> k;
        int arr[n];
        vector<int> choc;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= l && arr[i] <= r)
                choc.push_back(arr[i]);
        }
        sort(choc.begin(), choc.end());
        int ans = 0;
        for (int i = 0; i < choc.size(); i++)
        {
            if (k - choc[i] >= 0)
            {
                k = k - choc[i];
                ans++;
            }
            else
                break;
        }
        // cout << "ans is ";
        cout << ans << endl;
    }
    return 0;
}