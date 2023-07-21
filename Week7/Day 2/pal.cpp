#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char arr[4] = {'a', 'a', 'b', 'b'};

        int j = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[j];
        j++;
        if (j > 3)
        {
            j = 0;
        }
    }

    return 0;
}