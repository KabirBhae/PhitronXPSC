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
        vector<int> arr;

        if (n < 10)
            cout << n;
        else
        {
            int i = 9;
            while (n >= 0)
            {
                arr.push_back(i);
                n -= i;
                i--;
                if (n <= i)
                {
                    arr.push_back(n);
                    break;
                }
            }
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                cout << arr[i];
            }
        }
        cout << endl;
    }

    return 0;
}
