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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int j = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (j == k)
            {
                cout << arr[i] - 1<<endl;
                break;
            }
            j++;
        }
    }
    return 0;
}