#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,s,r;
        vector<int> a;
        cin>>n>>s>>r;

        a.push_back(s-r);

        int temp = r/(n-1);

        for (int i = 0; i < n-1; i++)
        {
            a.push_back(temp);
        }

        temp = temp * (n-1);
        for (int i = 0; i < r-temp; i++)
        {
            a[n-i-1]++;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
        
        
        

    }
    
}