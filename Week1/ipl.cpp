#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//solved by the concept of sliding window
int main()
{
    int n, k;
    vector<int> arr;
    multiset<int, greater<int>> ms;

    cin >> n >> k;

    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        arr.push_back(d);
    }

    int right = 0, mx = -1e7;
    int left = 0;

    while (right < n)
    {
        mx = max(mx, arr[right]);

        // not window size
        if (right < k - 1)
        {
            right++;
        }
        // window size
        else
        {
            ms.insert(mx);
            cout << *(ms.begin()) << ' ';

            if (ms.find(arr[left]) != ms.end())
            {
                ms.erase(ms.find(arr[left]));
            }

            left++;
            right++;
        }
    }
}