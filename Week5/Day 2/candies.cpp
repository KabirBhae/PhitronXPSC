#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[t];
    int ev_cumulative = 0, odd_cumulative = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (i & 1)
            odd_cumulative += arr[i];
        else
            ev_cumulative += arr[i];
    }
    int even_variable = 0, odd_variable = 0;
    int even_temp, odd_temp;

    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        if (i & 1)
        {
            even_temp = ev_cumulative - even_variable;
            odd_temp = odd_cumulative - arr[i] - odd_variable;
            if (even_temp + odd_variable == odd_temp + even_variable)
                ans++;
            odd_variable += arr[i];
        }
        else
        {
            even_temp = ev_cumulative - arr[i] - even_variable;
            odd_temp = odd_cumulative - odd_variable;

            if (even_temp + odd_variable == odd_temp + even_variable)
                ans++;
            even_variable += arr[i];
        }
    }
    cout << ans;

    return 0;
}