#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
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
        if (n <= 4)
        {
            cout << "Bob\n";
        }
        else
            cout << "Alice\n";
    }
    return 0;
}