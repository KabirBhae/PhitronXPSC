#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n==7)
        {
            cout << "2 4 1\n";
        }
        
        else if (n % 3 == 0)
        {
            cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n - (n / 3) - (n / 3 + 1) << endl;
        }
        else{
            cout << n / 3 + 1 << ' ' << n / 3 + 2 << ' ' << n - (n / 3 + 1) - (n / 3 + 2) << endl;
        }
    }

    return 0;
}
