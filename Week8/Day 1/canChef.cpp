#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int X;
    int Y;

    while (t--)
    {
        cin >> X;
        cin >> Y;

        Y = Y * 2;
        X = X * 15;

        if (X >= Y)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
