#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int bread, cheese, ham;
    cin >> t;
    while (t--)
    {
        cin >> bread >> cheese >> ham;
        int count = 1;
        int ans = 0;
        while (bread > 0)
        {
            if (count & 1)
            {
                bread--;
            }
            else
            {
                if (cheese > 0)
                {
                    cheese--;
                }
                else if (ham > 0)
                {
                    ham--;
                }
                else
                    break;
            }
            count++;
            ans++;
        }
        // cout << "ans is ";
        cout << ans << endl;
    }
    return 0;
}