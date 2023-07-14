#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, k, lang;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> lang;
        int songlength, songlang;
        vector<int> langsong;

        for (int i = 0; i < n; i++)
        {
            cin >> songlength;
            cin >> songlang;
            if (songlang == lang)
            {
                langsong.push_back(songlength);
            }
        }
        // cout << "ans is: ";
        if (langsong.size() < k)
        {
            cout << -1;
            cout << endl;
        }
        else
        {
            int ans = 0;
            sort(langsong.begin(), langsong.end(), greater<int>());

            for (int i = 0; i < k; i++)
            {
                ans += langsong[i];
            }
            cout << ans;
            cout << endl;
        }
    }

    return 0;
}
