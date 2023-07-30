#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, k, H;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k >> H;
        int people[n];
        set<int> height;
        for (int i = 0; i < n; i++)
        {
            cin >> people[i];
        }
        for (int i = 1; i < m; i++)
        {
            height.insert(k * i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (height.find(abs(people[i] - H)) != height.end())
            {
                ans++;
            }
        }
        // cout << "answer is ";
        cout << ans;
        cout << endl;
    }
    return 0;
}