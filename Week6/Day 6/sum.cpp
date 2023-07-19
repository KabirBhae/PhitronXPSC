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
        set<int, greater<int>> arr;
        int input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr.insert(input);
        }
        // cout << "ans is ";
        int ans = *arr.begin();
        arr.erase(*arr.begin());
        cout << ans + *arr.begin();
        cout << endl;
    }
    return 0;
}