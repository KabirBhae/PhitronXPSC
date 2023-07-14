#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int w, l;
    while (t--)
    {
        cin >> w >> l;
        if ((w * l % 2) == 0)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
