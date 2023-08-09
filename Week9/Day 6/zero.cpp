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
        bool isSortedAscneding = true;
        // bool isSortedDescending = true;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];

            if (i > 0 && arr[i] < arr[i - 1])
            {
                isSortedAscneding = false;
            }
        }
        if (sum == 0)
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";

        if (isSortedAscneding)
        {
            // saving time of sorting
            if (arr[n - 1] != 0 && sum > 0)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    cout << arr[i] << ' ';
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << ' ';
                }
            }
        }
        else
        {
            sort(arr, arr + n);

            // asceding jabe na whn sum pos
            if (arr[n - 1] != 0 && sum > 0)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    cout << arr[i] << ' ';
                }
            }

            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << ' ';
                }
            }
        }
        cout << endl;
    }
    return 0;
}