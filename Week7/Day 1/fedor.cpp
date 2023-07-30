#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int checks(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int arr[b + 1];
    for (int i = 0; i <= b; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < b; i++)
    {
        if (checks(arr[i] ^ arr[b]) <= c)
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}