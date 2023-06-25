#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin>>m;

        if (m >= 1 && m < 10)
        {
            cout << m - 1;
        }
        else if (m >= 10 && m < 100)
        {
            cout << m - 10;
        }
        else if (m >= 100 && m < 1000)
        {
            cout << m - 100;
        }
        else if (m >= 1000 && m < 10000)
        {
            cout << m - 1000;
        }
        else if (m >= 10000 && m < 100000)
        {
            cout << m - 10000;
        }
        else if (m >= 100000 && m < 1000000)
        {
            cout << m - 100000;
        }
        else if (m >= 1000000 && m < 10000000)
        {
            cout << m - 1000000;
        }
        else if (m >= 10000000 && m < 100000000)
        {
            cout << m - 10000000;
        }
        else if (m >= 100000000 && m < 1000000000)
        {
            cout << m - 100000000;
        }
        else if (m >= 1000000000 && m < 10000000000)
        {
            cout << m - 1000000000;
        }
        cout << endl;
    }

    return 0;
}
