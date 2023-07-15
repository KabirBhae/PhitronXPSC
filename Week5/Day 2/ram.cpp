#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int required[n], gives[n];

        int minimum = 1e8, minimum_index;

        for (int j = 0; j < n; j++)
        {
            cin >> required[j];
            if (required[j] < minimum)
            {
                minimum = required[j];
                minimum_index = j;
            }
        }
        for (int j = 0; j < n; j++)
        {
            cin >> gives[j];
        }

        while (k >= minimum)
        {
            k += gives[minimum_index];
            required[minimum_index] = 1e8;
            minimum = 1e8;
            for (int j = 0; j < n; j++)
            {
                if (required[j] < minimum)
                {
                    minimum = required[j];
                    minimum_index = j;
                }
            }
        }
        // cout << "ans is ";
        cout << k << endl;
    }

    return 0;
}
