#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        char arr[n];
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i] - 'a']++;
        }
        int odd = 0, ans = 0, odd_index;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] & 1)
            {
                odd++;
                odd_index = i;
            }
        }
        // cout << "answer is ";
        if (odd >= 2)
            cout << "0\n";
        else if (odd == 1)
        {
            if (freq[odd_index] != n)
                cout << "1\n";
            else
                cout << "2\n";
        }
        else
            cout << "1\n";
    }

    return 0;
}