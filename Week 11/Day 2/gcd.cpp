#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int k;
    while (t--)
    {
        cin >> k;
        vector<int> kvect;
        for (int i = 0; i < k; i++)
        {
            kvect.push_back(1);
        }

        for (int i = 0; i < k; i++)
        {
            if (kvect[i])
            {
                cout << i + 1 << ' ';
                int temp = (i + 1) * 2;
                while (temp <= k)
                {
                    // aage print hoise kina
                    if (kvect[temp - 1])
                    {
                        cout << temp << ' ';
                        kvect[temp - 1] = 0;
                        temp = temp * 2;
                    }
                    else
                        break;
                }
            }
        }

        cout << endl;
    }

    return 0;
}