#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int MAX_N = 10000 + 5; // Maximum size of the DP array
vector<long long int> dp(MAX_N);

long long int a, b, c, d, e, f;
long long int fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % (long long int)10000007;
    return dp[n];
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        // cin >> a >> b >> c >> d >> e >> f >> n;

        for (int i = 0; i < n + 1; i++)
        {
            dp[i] = -1;
        }

        printf("Case %d: %d\n", caseno, fn(n) % (long long int)10000007);
    }
    return 0;
}