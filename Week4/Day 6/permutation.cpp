#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;

        if (n == 3)
        {
            cout << -1;
        }
        else if (n == 5)
        {
            cout << "5 4 1 2 3";
        }
        else if (n % 2 != 0)
        {
            for (int i = n; i > 0; i--)
            {
                if (i == n / 2)
                {
                    cout << i + 1 << ' ';
                }
                else if (i == n / 2 + 1)
                {
                    cout << i - 1 << ' ';
                }
                else
                    cout << i << ' ';
            }
        }
        else
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}