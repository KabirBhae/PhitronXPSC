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
        if (n % 10 >= 5)
            n += 10 - n % 10;
        else
            n -= n % 10;
        cout << 100 - n << endl;
    }
    return 0;
}