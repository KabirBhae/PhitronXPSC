#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, input;

    while (t--)
    {
        int count = 0;
        cin >> n;

        // ekta number koybar ase
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            if (mp.find(input) != mp.end())
            {
                mp[input]++;
            }
            else
            {
                mp[input] = 1;
            }
        }
        // frequence 1 koyjoner , frequency 2 koyjoner
        map<int, int> mp2;

        for (auto it : mp)
        {
            if (mp2.find(it.second) != mp2.end())
            {
                mp2[it.second]++;
            }
            else
            {
                mp2[it.second] = 1;
            }
        }

        for (auto it = mp2.rbegin(); it != mp2.rend(); ++it)
        {
            // frequence = 1 koy joner
            if (it->first == 1)
            {
                count += it->second;
            }
            else if (it->second == 1)
            {
                if (it->first - 2 > 0)
                {
                    mp2[it->first - 2]++;
                }
            }
            else
            {
                int temp = (it->second / 2);
                count = count + temp * 2;
            }
        }

        cout << count << "\n";
    }
}