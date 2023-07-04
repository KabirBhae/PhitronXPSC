#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, strrrr2;
        cin >> str;

        int count = 0, day = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (count == 3)
            {
                // doesn't exist
                if (!(str[i] == strrrr2[0] || str[i] == strrrr2[1] || str[i] == strrrr2[2]))
                {
                    day++;
                    for (int i = 0; i < 3; i++)
                    {
                        strrrr2.pop_back();
                    }
                    strrrr2.push_back(str[i]);
                    count = 1;
                }
            }
            else
            {
                // for the test case ubmrrmsum, mmmmmmmm
                bool isDifferent = true;
                for (int j = 0; j < strrrr2.size(); j++)
                {
                    if (str[i] == strrrr2[j])
                    {
                        isDifferent = false;
                        break;
                    }
                }

                if (isDifferent)
                {
                    strrrr2.push_back(str[i]);
                    count++;
                }
            }
        }
        if (count > 0)
            day++;
        cout << day << endl;
    }
    return 0;
}