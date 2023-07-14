#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, answer = 0;
    vector<int> arr;
    set<int> s1;

    cin >> n;

    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        arr.push_back(d);
        s1.insert(d);
    }

    for (auto i : arr)
    {
        if (s1.find(i + 1) != s1.end())
        {
            answer++;
        }
    }
    cout << answer;
}