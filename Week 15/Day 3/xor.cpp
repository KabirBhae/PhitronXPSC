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
        int arr[n];
        int countSero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                countSero++;
        }
        // cout << "ans is ";
        // genjam
        if (n & 1)
        {

            cout << 4 << endl;
            cout << 1 << ' ' << n - 1 << endl;
            cout << 1 << ' ' << n - 1 << endl;

            cout << n - 1 << ' ' << n << endl;
            cout << n - 1 << ' ' << n;
        }
        else
        {
            cout << 2 << endl;
            cout << 1 << ' ' << n << endl;
            cout << 1 << ' ' << n;
        }
        cout << endl;
    }
    return 0;
}