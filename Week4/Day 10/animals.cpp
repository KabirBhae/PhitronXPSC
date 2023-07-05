#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int a, b, c, x, y;
    int flag;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        flag = 1;
        if (x > a)
        {
            x -= a;
            c -= x;

            if (c < 0)
            {
                flag = 0;
            }
            if (c + b < y)
            {
                flag = 0;
            }
        }
        else if (c + b < y)
        {
            flag = 0;
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
