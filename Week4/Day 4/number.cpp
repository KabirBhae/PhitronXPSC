#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;
    string s;
    cin >> t;

    while (t--)
    {
        int flag = 0;

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> s;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    if (s[i] != s[j])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag)
                break;
        }

        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}