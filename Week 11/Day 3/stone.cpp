#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int right = 0, left = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (right > left)
        {
            left += arr[i];
        }
        else if (left > right)
            right += arr[i];
        else
        {
            right = 0;
            left = arr[i];
        }
    }
    cout << abs(left - right);

    return 0;
}