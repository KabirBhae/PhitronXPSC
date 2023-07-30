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
        pair<int, int> a, b, c;
        cin >> a.first >> a.second;
        cin >> b.first >> b.second >> c.first >> c.second;
        int ans = 1;
        if (a.first - b.first > 0 && a.first - c.first > 0)
        {
            ans += abs(min(a.first - b.first, a.first - c.first));
        }
        else if (a.first - b.first < 0 && a.first - c.first < 0)
        {
            ans += abs(max(a.first - b.first, a.first - c.first));
        }
        if (a.second - b.second > 0 && a.second - c.second > 0)
        {
            ans += abs(min(a.second - b.second, a.second - c.second));
        }
        else if (a.second - b.second < 0 && a.second - c.second < 0)
        {
            ans += abs(max(a.second - b.second, a.second - c.second));
        }
        // cout << "answer is ";
        cout << ans << endl;
    }
    return 0;
}