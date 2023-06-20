#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t, flag;
    string str;
    scanf("%d", &t);

    while (t--)
    {
        flag = 1;
        cin>>str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[0] == 'Y')
            {
                if (i % 3 == 0 && str[i] == 'Y')
                    ;
                else if (i % 3 == 1 && str[i] == 'e')
                    ;
                else if (i % 3 == 2 && str[i] == 's')
                    ;
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if (str[0] == 'e')
            {
                if (i % 3 == 0 && str[i] == 'e')
                    ;
                else if (i % 3 == 1 && str[i] == 's')
                    ;
                else if (i % 3 == 2 && str[i] == 'Y')
                    ;
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if (str[0] == 's')
            {
                if (i % 3 == 0 && str[i] == 's')
                    ;
                else if (i % 3 == 1 && str[i] == 'Y')
                    ;
                else if (i % 3 == 2 && str[i] == 'e')
                    ;
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
           cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }

    return 0;
}