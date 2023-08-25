#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n;

    cin >> n >> t;
    vector<long long> arr;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);

            if (n / i != i)
            {
                arr.push_back(n / i);
            }
        }
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;
    if (arr.size() < t)
    {
        cout << -1;
    }
    else
    {
        sort(arr.begin(), arr.end());
        cout << arr[t - 1];
    }
    cout << endl;

    return 0;
}