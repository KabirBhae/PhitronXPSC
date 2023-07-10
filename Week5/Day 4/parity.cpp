#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t, i;
    int n, k;
    int j;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;

        if (k > n || k == n - 1 && k != 1)
        {
            printf("No\n");
        }

        else if (n % 2 == 0 && k % 2 == 0) // both n and k are even
        {
            printf("Yes\n");
            for (j = 1; j < k; j++)
            {
                printf("1 ");
            }
            printf("%d\n", n - (k - 1) * 1);
        }

        else if (n % 2 == 0 && k % 2 != 0) // n even k odd
        {
            if (k > n / 2)
            {
                printf("No\n");
            }

            else
            {
                printf("Yes\n");
                for (j = 1; j < k; j++)
                {
                    printf("2 ");
                }
                printf("%d\n", n - (k - 1) * 2);
            }
        }

        else if (n % 2 != 0 && k % 2 == 0) // n odd k even
        {
            printf("No\n");
        }

        else if (n % 2 != 0 && k % 2 != 0) // both n and k are odd
        {
            printf("Yes\n");
            for (j = 1; j < k; j++)
            {
                printf("1 ");
            }
            printf("%d\n", n - (k - 1) * 1);
        }
    }
    return 0;
}