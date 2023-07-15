#include <iostream>
using namespace std;

int main()
{
    int x, y, h;
    cin >> x >> y >> h;
    if (h == 1)
        cout << x;
    else
    {
        cout << x + (h - 1) * y;
    }
    return 0;
}