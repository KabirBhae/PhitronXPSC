#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        int M;

        cin >> N;

        cin >> M;

        int studentsWithoutTickets = max(0, N - M);

        cout << studentsWithoutTickets << endl;
    }

    return 0;
}