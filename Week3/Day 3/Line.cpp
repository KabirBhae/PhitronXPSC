#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int t, n;
    cin>>t;
string str;
long long ans;

    while (t--)
    {
        ans = 0;
        cin>>n>>str;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]=='L'){
                ans+= i-0;
            }
        }
        
    }
    
}