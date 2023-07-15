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
    long long x;
    while (t--)
    {
        cin >> n >> x;
        long long input;
        multiset<long long> ms;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            ms.insert(input);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ms.empty())
            {
                break;
            }
            long long temp = *ms.begin() * x;
            if (ms.find(temp) == ms.end())
            {
                ans++;
            }
            else
            {
                ms.erase(ms.find(temp));
            }
            ms.erase(ms.begin());
        }
        // cout << "ans is ";
        cout << ans;
        cout << endl;
    }

    return 0;
}