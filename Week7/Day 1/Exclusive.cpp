#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;
    int result = n ^ k;

    cout << result << endl;

    return 0;
}