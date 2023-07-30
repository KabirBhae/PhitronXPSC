#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int result = n ^ k;

        cout << result << endl;
    }
    return 0;
}