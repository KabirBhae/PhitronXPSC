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
        int arr[n], secondarr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> secondarr[i];
        }
        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != secondarr[i] && left == -1)
            {
                left = i;
            }
            else if (arr[i] != secondarr[i] && left != -1)
            {
                right = i;
                break;
            }
        }

        for (int i = left; i >= 0; i--)
        {
            if (secondarr[i] <= secondarr[left])
            {
                left = i;
            }
            else
                break;
        }
        for (int i = right; i < n; i++)
        {
            if (secondarr[i] >= secondarr[right])
            {
                right = i;
            }
            else
                break;
        }
        // cout << "left is " << left + 1;
        // cout << " right is " << right + 1 << endl;
        cout << left + 1 << ' ' << right + 1 << endl;
    }
    return 0;
}