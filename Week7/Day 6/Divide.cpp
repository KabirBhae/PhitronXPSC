#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum&1){
            cout<<"No\n";
        }else cout<<"Yes\n";
        
    }
    return 0;
}