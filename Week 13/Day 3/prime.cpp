#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int one_found = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '1')
            {
                one_found++;
                break;
            }
            else if (n[i] == '3')
            {
                break;
            }
        }
        if (one_found)
            cout << 13;
        else
            cout << 31;
        cout << endl;
    }
    return 0;
}