#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> arr;
        int input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr.push_back(input);
        }
        long long sum = 0;
        int continueDiv = 1;

        for (int i = 0; i < n; i++)
        {
            sum += (long long)arr[i];
            if (arr[i] % x == 0 && continueDiv)
            {
                sum += (long long)arr[i];
                arr.push_back(arr[i] / x);
            }
            else
            {
                continueDiv = 0;
            }
        }
        if (continueDiv == 0)
        {
            cout << sum << endl;
            continue;
        }
        int j = 0;
        for (int i = n; i < arr.size(); i++)
        {
            if (arr[i] % x == 0 && continueDiv)
            {
                sum += (long long)arr[j];
                arr.push_back(arr[i] / x);
            }
            else
            {
                continueDiv = 0;
                break;
            }
            j++;
            if (j == n)
            {
                j = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}