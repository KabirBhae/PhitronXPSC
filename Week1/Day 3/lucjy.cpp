#include <bits/stdc++.h>
using namespace std;

bool isLucky(int N)
{
    int r;
    while (N != 0)
    {
        r = N % 10;
        if (r != 4 && r != 7)
            return false;

        N = N / 10;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr;

    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            arr.push_back(i);
        }
    }
    if (arr.size() == 0)
        cout << -1;
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << ' ';
        }
    }
    return 0;
}