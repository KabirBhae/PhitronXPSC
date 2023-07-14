#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define modding 1000000007
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n, k;
    int boxes;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        if (k > n)
        {
            cout << "answer is: ";

            cout << k;
            cout << endl;
        }
        else
        {
            if (n % k == 0)
            {
                boxes = n / k;
            }
            else
                boxes = n / k + 1;

            int ans = 1;
            for (int i = 0; i < k; i++)
            {
                ans *= k - i;
                ans = ans % modding;
            }
            ans = ans * (n / k);
            for (int i = 0; i < n % k; i++)
            {
                ans *= k - i;
                ans = ans % modding;
            }
            cout << "answer is: ";
            cout << ans;
            cout << endl;
        }
    }

    return 0;
}
