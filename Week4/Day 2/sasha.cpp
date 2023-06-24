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
        int input;
        multiset<int> st;
        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> input;
            st.insert(input);
        }

        while (1)
        {
            auto it = st.end();
            it--;
            answer += *it - *st.begin();
            st.erase(st.begin());
            if (st.empty())
                break;
            st.erase(it);
            if (st.empty())
                break;
        }

        cout << answer << endl;
    }
}