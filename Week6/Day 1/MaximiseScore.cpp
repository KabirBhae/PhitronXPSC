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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int alice = 1e9;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                int bob = abs(arr[i] - arr[i + 1]);
                if (bob < alice)
                {
                    alice = bob;
                }
            }
            else if (i == n - 1)
            {
                int bob = abs(arr[i] - arr[i - 1]);
                if (bob < alice)
                {
                    alice = bob;
                }
            }
            else
            {
                int temp1, temp2;
                temp1 = abs(arr[i] - arr[i - 1]);
                temp2 = abs(arr[i] - arr[i + 1]);
                int bob = max(temp1, temp2);
                if (bob < alice)
                {
                    alice = bob;
                }
            }
        }
        cout << "ans is: ";
        cout << alice;
        cout << endl;
    }

    return 0;
}
