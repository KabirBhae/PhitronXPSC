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
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        // cout << "ans is ";
        if (sum % n == 0)
        {
            cout << sum / n;
        }
        else
        {
            cout << sum / n + 1;
        }
        cout << endl;
    }

    return 0;
}
