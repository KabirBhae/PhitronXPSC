#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;    // Number of episodes in the last season
        int A, B; // Lengths of even and odd indexed episodes

        cin >> N;

        cin >> A;

        cin >> B;

        int totalDuration = 0;
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                totalDuration += A;
            }
            else
            {
                totalDuration += B;
            }
        }

        cout << totalDuration << endl;
    }

    return 0;
}
