#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> a >> b;
        pair<long long, long long> arr[n], home, dest;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
            if (i == (a - 1))
            {
                home = arr[i];
            }
            else if (i == (b - 1))
            {
                dest = arr[i];
            }
        }
        long long least_home = LONG_LONG_MAX, least_dest = LONG_LONG_MAX;
        // cout << "ans is ";
        for (int i = 0; i < k; i++)
        {
            least_home = min(abs(arr[i].first - home.first) + abs(arr[i].second - home.second), least_home);
            least_dest = min(abs(arr[i].first - dest.first) + abs(arr[i].second - dest.second), least_dest);
        }
        long long distance = abs(dest.first - home.first) + abs(dest.second - home.second);
        // cout << endl
        //      << "distane is ";
        // cout << distance << endl;
        if (least_home == LONG_LONG_MAX && least_dest == LONG_LONG_MAX)
        {
            cout << distance;
        }
        else if (distance < (least_dest + least_home))
        {
            cout << distance;
        }

        else
        {
            cout << least_dest + least_home;
        }
        cout << endl;

        // cout << "home is " << home.first << ' ' << home.second;
    }
    return 0;
}