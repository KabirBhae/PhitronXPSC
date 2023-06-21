#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, acount, bcount, ocount, abcount;
        acount = 0;
        bcount = 0;
        ocount = 0;
        abcount = 0;
        cin >> n;
        string arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            // if (!(arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'O'))
            // {
            //     abcount++;
            // }
            if (arr[i] == "A")
            {
                acount++;
            }
            else if (arr[i] == "B")
            {
                bcount++;
            }
            else if (arr[i] == "O")
            {
                ocount++;
            }
            else abcount++;
        }
        if (acount > bcount)
        {
            cout << acount + ocount + abcount << endl;
        }
        else
        {
            cout << bcount + ocount + abcount << endl;
        }
    }

    return 0;
}
