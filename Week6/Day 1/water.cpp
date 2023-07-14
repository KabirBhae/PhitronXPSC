#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[3];
    while (t--)
    {
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                ans++;
            }
        }
        if (ans >= 2)
        {
            cout << "Water filling time\n";
        }
        else
            cout << "Not now\n";
    }

    return 0;
}
