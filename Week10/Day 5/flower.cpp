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
        int arr[n + 2];
        bool died = false;
        int tall = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && arr[i] == 0 && arr[i - 1] == 0)
            {
                died = true;
            }
            else if (i > 0 && arr[i] == 1 && arr[i - 1] == 1)
            {
                tall += 5;
            }
            else if (arr[i])
            {
                tall++;
            }
        }

        if (died)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << tall << endl;
        }
    }
    return 0;
}