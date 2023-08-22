#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (c & 1)
            a++;
        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}