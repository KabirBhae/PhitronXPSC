#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    int maximum = -1, maximum_index;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] > maximum)
        {
            maximum = arr[i];
            maximum_index = i;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (maximum_index != i)
        {
            cout << arr[maximum_index] - arr[i] << ' ';
        }
    }

    return 0;
}
