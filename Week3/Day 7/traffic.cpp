#include <iostream>
#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    char c;
    while (t--)
    {
        cin >> n >> c;
        string streng;
        cin >> streng;

        if(c=='g'){
            cout << "0\n";
            continue;
        }

        vector<int> green;
        vector<int> c_vector;

        for (int i = 0; i < n; i++)
        {
            if (streng[i] == c)
            {
                c_vector.push_back(i);
            }
            else if (streng[i] == 'g')
            {
                green.push_back(i);
            }
        }
        int minimunm, maximum = -1e8;
        for (int i = 0; i < c_vector.size(); i++)
        {
            minimunm = 1e8;
            for (int j = 0; j < green.size(); j++)
            {
                if (green[j] - c_vector[i] < 1)
                {
                    minimunm = min(minimunm, green[j] - c_vector[i] + n);
                }
                else
                {
                    minimunm = min(minimunm, green[j] - c_vector[i]);
                }
            }
            maximum = max(maximum, minimunm);
        }
        cout << maximum << endl;
    }

    return 0;
}