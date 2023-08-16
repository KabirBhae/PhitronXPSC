#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        vector<int> arr;

        int sum = 0;
        int ans = 0;
        int input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr.push_back(input);
            sum += input;
        }
        // cout << "ans is ";
        if (sum < s)
            cout << -1;
        else if (sum == s)
            cout << 0;
        else
        {
            int leftZer = 0, rightZer = 0;
            while (sum != s)
            {
                if (leftZer == 0)
                {
                    for (int i = 0; i < arr.size(); i++)
                    {
                        if (*arr.begin())
                        {
                            break;
                        }
                        else
                        {
                            arr.erase(arr.begin());
                            leftZer++;
                        }
                    }
                }
                if (rightZer == 0)
                {
                    for (int i = arr.size() - 1; i >= 0; i--)
                    {
                        if (*(arr.end() - 1))
                        {
                            break;
                        }
                        else
                        {
                            arr.erase(arr.end() - 1);
                            rightZer++;
                        }
                    }
                }
                ans = ans + min(leftZer, rightZer);

                if (leftZer < rightZer)
                {
                    arr.erase(arr.begin());
                    ans++;
                    leftZer = 0;
                }
                else
                {
                    arr.erase(arr.end() - 1);
                    ans++;
                    rightZer = 0;
                }
                sum--;
            }
            cout << ans;
        }
        cout << endl;
    }
    return 0;
}