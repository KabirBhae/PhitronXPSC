#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int A;
    while (t--)
    {
        cin >> A;
        if (A % 7 == 0 && A % 2 == 0)
            cout << "Alice\n";
        else if (A % 9 == 0 && A % 2 == 1)
        {
            cout << "Bob\n";
        }
        else
            cout << "Charlie\n";
    }

    return 0;
}