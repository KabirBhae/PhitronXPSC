#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, l, r, c;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;

        int a = r / 2;
        int b = a;
        int flag = 0;
        if (a < 2)
        {
            flag = 1;
        }
        else if ((l & 1) && l == r)
        {
            a = 3;
            b = r - a;
            flag = 1;
            while (a < b)
            {
                if (b % a == 0)
                {
                    flag = 0;
                    break;
                }
                if (a * a > b)
                {
                    break;
                }
                a++;
                b--;
            }
        }
        // cout << "ans is ";
        if (flag)
        {
            cout << -1 << endl;
        }

        else
            cout << a << ' ' << b << endl;
    }
    return 0;
}