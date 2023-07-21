    #include <bits/stdc++.h>
    #include <iostream>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;
        int n;
        while (t--)
        {
            cin >> n;
            char arr[n];
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                if(arr[i]=='1') sum++;
            }
            // flag = 1 means zlatan turn
            int flag = 1;
            while (1)
            {
                if (sum == n || sum == 0)
                {
                    break;
                }
                else
                {
                    // cout << "val of n before " << n << endl;
                    n = n - 2;
                    sum--;
                    flag = 1 - flag;
                    // cout << "val of n after " << n << endl;
                }
            }
            if (flag)
                cout << "Ramos\n";
            else
                cout << "Zlatan\n";
        }
        return 0;
    }