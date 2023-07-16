#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                int temp1 = arr[k] - arr[i];
                for (int j = k + 1; j < n; j++)
                {
                    if(j>=n) break;

                    if (arr[j] - arr[k] == temp1)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}