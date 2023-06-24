#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long n;
        cin >> n;

        unsigned long long ans = 1;
        while (n != 1)
        {
            ans += n;
            n = n / 2;
        }

        cout << ans << endl;
    }
}