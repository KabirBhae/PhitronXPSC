#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = "A" + s;

        int A = 0, B = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'A' && s[i] == 'A')
                A++;
            else if (s[i - 1] == 'B' && s[i] == 'B')
                B++;
        }
        cout << A << ' ' << B;
        cout << endl;
    }

    return 0;
}