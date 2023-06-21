#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, flag = 0;
    cin >> t;
    while (t--)
    {
        flag = 0;
        int n;
        cin >> n;

        char arr[n];
        char c;

        for (int i = 0; i < n; i++)
        {
            cin >> c;
            arr[i] = tolower(c);
        }

        if (arr[0] != 'm' || n < 4 || arr[n - 1] != 'w')
        {
            flag = 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (flag)
            {
                break;
            }

            if (arr[i - 1] == 'm')
            {
                if (!(arr[i] == 'm' || arr[i] == 'e'))
                {
                    flag = 1;
                }
            }

            if (arr[i - 1] == 'e')
            {
                if (!(arr[i] == 'e' || arr[i] == 'o'))
                {
                    flag = 1;
                }
            }
            if (arr[i - 1] == 'o')
            {
                if (!(arr[i] == 'o' || arr[i] == 'w'))
                {
                    flag = 1;
                }
            }
            if (arr[i - 1] == 'w')
            {
                if (arr[i] != 'w')
                {
                    flag = 1;
                }
            }
        }

        if (flag)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }

    return 0;
}
