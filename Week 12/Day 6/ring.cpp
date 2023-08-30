#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr;
        int input;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr.push_back(input);
            st.insert(input);
        }
        if (st.size() == 2)
        {
            cout << n / 2 + 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}