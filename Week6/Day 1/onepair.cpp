#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (n + m + n * m == 111)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
