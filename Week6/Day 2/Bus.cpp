#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 1 && n <= 10)
            cout << "Lower Double\n";
        else if (n > 10 && n <= 15)
            cout << "Lower Single\n";
        else if (n > 15 && n <= 25)
            cout << "Upper Double\n";
        else
            cout << "Upper Single\n";
    }
    return 0;
}