#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        set<string> st;

        string temp(1, str[0]);
        temp += str[1];
        st.insert(temp);

        for (int i = 2; i < n; i++)
        {
            temp.erase(temp.begin());
            temp += str[i];
            st.insert(temp);
        }

        cout << st.size() << endl;
    }
}