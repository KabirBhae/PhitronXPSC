#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string str;
    set<string> setttt;
    stack<string> stackkkkk;

    while (t--)
    {
        cin >> str;

        stackkkkk.push(str);
    }

    while (!stackkkkk.empty())
    {
        string mystring = stackkkkk.top();

        if (setttt.find(mystring) == setttt.end())
        {
            cout << mystring.substr(mystring.length() - 2);
        }
        setttt.insert(mystring);

        stackkkkk.pop();
    }

    return 0;
}
