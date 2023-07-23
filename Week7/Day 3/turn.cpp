#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n,c;
    cin >> t;
    while (t--)
    {
        cin >> n>>c;
        if(n+c>6) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}