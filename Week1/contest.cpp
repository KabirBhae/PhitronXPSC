#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c;

    int founder[n] = {0};
    string str;
    string answer;

    int freq_arr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        str += c;
        freq_arr[c - 'a']++;

        if (freq_arr[c - 'a'] == 2)
        {

            auto found = str.find(c);
            while (found != std::string::npos)
            {
                if (founder[found] == 1)
                {
                    found = str.find(c, found + 1);
                }
                else
                    break;
            }

            founder[found]++;

            for (int k = found; k < i; k++)
            {
                freq_arr[str[k] - 'a']--;
            }

            int lenght = i - found;
            str.erase(found, lenght);
            freq_arr[c - 'a'] = 0;
        }
    }
    cout << str;

    return 0;
}