#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isInclusive(int a, int b, int c)
{
    if (c == a || c == b)
        return true;
    if (c > a)
    {
        if (c < b)
        {
            return true;
        }
        return false;
    }
    else if (c < a)
    {
        if (c > b)
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;

    while (test_case > 0)
    {
        int n;
        cin >> n;
        int arr[n], answer[n] = {0};
        int linear_flag = 1, maximum = -1;
        int input;
        int index = -1;

        if (n == 1)
        {
            cin >> input;
            cout << "1" << endl;
            test_case--;
            continue;
        }
        else if (n == 2)
        {
            cin >> input;
            cin >> input;
            cout << "11" << endl;
            test_case--;
            continue;
        }

        for (int i = 0; i < 2; i++)
        {
            cin >> arr[i];
            if (arr[i] >= maximum)
            {
                maximum = arr[i];
            }
            else
            {
                linear_flag = 0;
            }
            answer[i] = 1;

            index++;
        }

        for (int i = 2; i < n; i++)
        {
            cin >> input;

            if (linear_flag)
            {
                if (input >= maximum)
                {
                    arr[index + 1] = input;
                    answer[i] = 1;
                    index++;

                    maximum = input;
                    // printf("max is %d and last index is %d\n",maximum,index);
                }
                else if (input <= arr[0])
                {
                    arr[index + 1] = input;
                    answer[i] = 1;
                    index++;

                    linear_flag = 0;
                }
            }
            else
            {
                if (isInclusive(arr[0], arr[index], input))
                {
                    arr[index + 1] = input;
                    answer[i] = 1;
                    index++;

                    linear_flag = 0;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << answer[i];
        }
        cout << "\n";
        test_case--;
    }

    return 0;
}
