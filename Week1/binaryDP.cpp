#include <bits/stdc++.h>
using namespace std;
#include <math.h>

int main()
{
    string arr;
    cin >> arr;

    for (int i = arr.size() - 1; i > arr.size() - 4; i--)
    {
        cout << arr[i] << ' ';
    }
}
