#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    int flag;
    int minimum;
    while (t--)
    {
        cin >> n;
        int arr[n];
        flag = 0;
        minimum = INT32_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && flag == 0)
            {
                if (arr[i] < arr[i - 1])
                {
                    flag = 1;
                    // cout << "flag is 1\n";
                }
            }
        }
        if (flag)
        {
            // cout << "if is ";
            cout << "0\n";
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                minimum = min(minimum, arr[i] - arr[i - 1]);
            }
            // cout << "ans is elseif ";
            cout << minimum / 2 + 1;
            cout << endl;
        }
    }
    return 0;
}