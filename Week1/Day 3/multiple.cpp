#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 1;

    for (int i = a / c; i <= b / c; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            cout << c * i;
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << -1;
}