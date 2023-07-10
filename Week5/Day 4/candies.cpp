#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            printf("%d\n", n / 2 - 1);
        }

        else
        {
            printf("%d\n", n / 2);
        }
    }

    return 0;
}
