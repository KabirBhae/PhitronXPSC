#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isBeautiful(int a11, int a12, int a21, int a22)
{
    if (a11 < a12 && a11 < a21 && a22 > a12 && a22 > a21)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (isBeautiful(a,b,c,d))
        {
            cout << "YES\n";
            continue;
        }
        if (isBeautiful(c,a,d,b)){
            cout << "YES\n";
            continue;
        }
        
        if(isBeautiful(d,c,b,a)){
            cout << "YES\n";
            continue;
        }
        if(isBeautiful(b,d,a,c)){
            cout<<"YES\n";
            continue;
        }
        
        cout<<"NO\n";
        
    }
}