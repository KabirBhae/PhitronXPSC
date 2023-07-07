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
    int ans;
    while (t--)
    {
        cin >> input;
        int arr[input + 1];

        int first, second;

        for (int i = 1; i <= input; i++)
        {
            cin >> arr[i];

            if (i == 1)
                first = arr[i];
            if (i == 2)
                second = arr[i];

            if (first == second)
            {
                if (arr[i] != first)
                    ans = i;
            }
            else
            {
                if (arr[i] != first)
                    ans = 1;
                else
                    ans = 2;
            }
        }
        cout << ans;
        cout << endl;
    }

    return 0;
}
