#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k, n;
    int a, b;

    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        map<int, int> mp1, mpdup;

        int input;

        for (int index = 0; index < n; index++)
        {
            cin >> input;
            if (mp1.find(input) == mp1.end())
            {
                mp1.insert({input, index});
            }
            else
            {
                mpdup[input] = index;
            }
        }
        

        for (int i = 0; i < k; i++)
        {
            cin >> a >> b;
            // not found
            if (mp1.find(a) == mp1.end() || mp1.find(b) == mp1.end())
                cout << "NO\n";

            else if (mp1.find(b)->second >= mp1.find(a)->second)
            {
                cout << "YES\n";
            }

            // check if b is present in mpdup and to the right of 'a'
            else if (mpdup.find(b) != mpdup.end() && mpdup.find(b)->second >= mp1.find(a)->second)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}