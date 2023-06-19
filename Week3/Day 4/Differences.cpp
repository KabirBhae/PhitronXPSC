#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int arr[k + 1];
        arr[k] = n;

        for (int i = 1; i <= k; i++)
        {
            int temp = arr[k - i + 1] - i;
            if (temp < 1)
            {
                arr[k - i] = 1;
            }
            else
            {
                arr[k - i] = temp;
            }
        }
        for (int i = 1; i < k; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                arr[i + 1] = arr[i] + 1;
            }
        }

        for (int i = 1; i <= k; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
}