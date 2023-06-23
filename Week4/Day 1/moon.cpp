#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // vector<long long> car, charger;

    while (t--)
    {
        multiset<long long, greater<long long>> setcar, setcharge;
        int n, m;
        long long h;
        cin >> n >> m;
        cin >> h;

        long long input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            setcar.insert(input);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> input;
            setcharge.insert(input);
        }

        long long ans = 0;
        while (n > 0 && m > 0)
        {

            if (*setcharge.begin() * h > *setcar.begin())
            {
                ans += *setcar.begin();
            }
            else
                ans += *setcharge.begin() * h;

            setcharge.erase(setcharge.begin());
            setcar.erase(setcar.begin());

            n--;
            m--;
        }
        cout << ans << '\n';
    }

    return 0;
}