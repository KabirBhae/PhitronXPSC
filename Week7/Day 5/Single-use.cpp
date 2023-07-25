#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    int x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        int ans = 0;
        n -= y;
        ans++;
        while (n > 0)
        {
            n -= x;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}