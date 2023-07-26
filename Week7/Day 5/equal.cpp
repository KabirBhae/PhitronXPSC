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
        int input;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            if (mp.find(input) == mp.end())
            {
                mp.insert({input, 1});
            }
            else
            {
                mp[input]++;
            }
        }
        int maximum = -1e8;
        for (auto itr = mp.begin(); itr != mp.end(); ++itr)
        {
            if (itr->second > maximum)
            {
                maximum = itr->second;
            }
        }
        // cout << "ans is ";
        cout << n - maximum;
        cout << endl;
    }
    return 0;
}