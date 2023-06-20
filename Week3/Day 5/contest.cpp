#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];

        int ans = 0;
        long long int sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0 && flag == false)
            {
                ans++;
                flag = true;
            }
            if(arr[i]>0){
                flag = false;
            }

            sum += abs(arr[i]);
        }

        cout << sum << ' ' << ans << endl;
    }
}