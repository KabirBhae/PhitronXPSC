#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str2;
        cin >> str;

        int freq[26] = {0};
        int count = 0, day = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (count == 3 && str[i + 1] != str2[0] && str[i + 1] != str2[1] && str[i + 1] != str2[2])
            {
                day++;
                count = 0;
                // cout << "day " << day << "values: ";

                for (int i = 0; i < 3; i++)
                {
                    // cout << str2[i] << ' ';
                    freq[str2[i] - 'a'] = 0;
                    str2.pop_back();
                }

                cout <<  endl;
            }
            //"str2 size is " << str2.size() <<

            if (freq[str[i] - 'a'] == 0)
            {
                freq[str[i] - 'a'] = 1;
                str2.push_back(str[i]);
                count++;
            }
        }
        if (count > 0)
            day++;
        cout << day << endl;
    }

    return 0;
}
