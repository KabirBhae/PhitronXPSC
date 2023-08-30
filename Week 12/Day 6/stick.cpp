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
    int minimum = 500, maximum = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    // cout << "max is " << maximum << endl
    //      << "min is " << minimum;

    if (maximum - minimum < 2)
    {
        cout << minimum << ' ' << 0 << endl;
        return 0;
    }

    int cost = INT_MAX, temp_cost = 0, t = minimum + 1;
    int ans;

    while (t < maximum)
    {
        temp_cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (t < arr[i])
            {
                temp_cost = temp_cost + arr[i] - (t + 1);
            }
            else if (t > arr[i])
            {
                temp_cost = temp_cost + (t - 1) - arr[i];
            }
        }
        if (temp_cost < cost)
        {
            cost = temp_cost;
            ans = t;
        }
        t++;
    }
    cout << ans << ' ' << cost << endl;

    return 0;
}