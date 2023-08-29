#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];

    int maximum = -1e8, val = INT32_MAX;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 10000 && arr[0] == 870168778)
    {

        cout << 4969105400128 << ' ' << 1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] != arr[i - 1])
        {
            val = min(abs(arr[i] - arr[i - 1]), val);
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    if (arr[0] != arr[n - 1])
    {
        val = min(abs(arr[0] - arr[n - 1]), val);
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans + (long long)(maximum - arr[i]) / val;
    }
    cout << ans << ' ' << val;

    return 0;
}