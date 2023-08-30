#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool firstPlayer = true;

    for (int i = 1; i < s.size();)
    {
        if (s[i] == s[i - 1])
        {

            s.erase(s.begin() + i);
            s.erase(s.begin() + i - 1);

            i = 1;
            firstPlayer = !firstPlayer;
        }
        else
        {
            i++;
        }
    }
    if (firstPlayer)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}