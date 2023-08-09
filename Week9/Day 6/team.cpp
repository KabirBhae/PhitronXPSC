#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, prog, maths;
    cin >> t;
    while (t--)
    {
        cin >> prog >> maths;
        int temp = (prog + maths) / 4;
        // cout << "ans is ";
        cout << min({temp, prog, maths}) << endl;
    }
    return 0;
}