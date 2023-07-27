#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> l;
        cout << l - n << endl;
    }
    return 0;
}