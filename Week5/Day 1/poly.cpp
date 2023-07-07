#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, m, h;

    cin >> t;
    int input;
    while (t--)
    {
        int ans = 0;
        input = 7;
        int arr[input];

        for (int i = 0; i < input; i++)
        {
            cin >> arr[i];
        }

        for (int i = 2; i < input; i++)
        {
            if (arr[i] != (arr[0] + arr[1]) || arr[i] == arr[i - 1])
            {
                ans = i;
                break;
            }
        }

        // cout << "ans is \n";
        cout << arr[0] << ' ' << arr[1] << ' ' << arr[ans];
        cout << endl;
    }

    return 0;
}
