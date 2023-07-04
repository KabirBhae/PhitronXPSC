#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> sat;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = n; i >= 1; i--)
        {
            if (sat.find(arr[i - 1]) == sat.end())
            {
                sat.insert(arr[i - 1]);
            }
            else
            {
                cout << i;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << 0;
        cout << endl;
    }

    return 0;
}