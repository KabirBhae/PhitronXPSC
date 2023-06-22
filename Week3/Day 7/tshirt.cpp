#include <iostream>

const int v = 50;
unsigned long long dp[v] = {0};

unsigned long long factorial(unsigned long long k)
{
    if (k < 3)
    {
        return k;
    }
    if (dp[k] != 0)
    {
        return dp[k];
    }
    dp[k] = factorial(k-1) * k;
    return dp[k];
}

    int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    string a,b;

    while (t--)
    {
        cin>>a>>b;

        if(a[a.size()-1] > b[b.size()-1]){
            cout<<"<\n";
        }
        else if (a[a.size() - 1] < b[b.size() - 1])
        {
            cout << ">\n";
        }
        else {

            if (a[a.size() - 1] != 'S')
            {
                if (a.size() > b.size())
                {
                    cout << ">\n";
                }
                else if (a.size() < b.size())
                {
                    cout << "<\n";
                }
                else
                    cout << "=\n";
            }
            else{
                if (a.size() > b.size())
                {
                    cout << "<\n";
                }
                else if (a.size() < b.size())
                {
                    cout << ">\n";
                }
                else
                    cout << "=\n";
            }
            
        }
    }
    
    
    return 0;
}
