#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int oneDarraySize;
    int numberOfarrays;

    cin >> t;
    while (t--)
    {
        cin >> numberOfarrays;

        vector<vector<int>> twoDarray(numberOfarrays);
        for (int i = 0; i < numberOfarrays; i++)
        {
            cin >> oneDarraySize;
            for (int j = 0; j < oneDarraySize; j++)
            {
                int input;
                cin >> input;
                twoDarray[i].push_back(input);
            }
        }
        for (int i = 0; i < numberOfarrays; i++)
        {
            sort(twoDarray[i].begin(), twoDarray[i].end());
        }

        int secondMin = 1e9 + 10;
        int secondMinArray;
        for (int i = 0; i < numberOfarrays; i++)
        {
            if (secondMin > twoDarray[i][1])
            {
                secondMin = twoDarray[i][1];
                secondMinArray = i;
            }
        }
        for (int i = 0; i < numberOfarrays; i++)
        {
            if (i != secondMinArray)
            {
                twoDarray[secondMinArray].push_back(twoDarray[i][0]);
                twoDarray[i].erase(twoDarray[i].begin());
            }
        }

        sort(twoDarray[secondMinArray].begin(), twoDarray[secondMinArray].end());

        // cout << "arrays in sorted order\n";
        long long int ans = 0;
        for (int i = 0; i < numberOfarrays; i++)
        {
            // for (int j = 0; j < twoDarray[i].size(); j++)
            // {
            //     cout << twoDarray[i][j] << ' ';
            // }
            ans += twoDarray[i][0];
        }
        cout << ans << endl;
    }

    return 0;
}