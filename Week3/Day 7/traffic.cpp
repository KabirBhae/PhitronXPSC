#include <iostream>

int distanceFromGreen(int otherLight, int green, int n)
{
    if (green > otherLight)
    {
        return green - otherLight;
    }
    return n + green - otherLight;
}

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

        int ans = 1e8;

        for (int i = 0; i < n; i++)
        {
            if (streng[i] == c)
            {
                ans = min(ans,distanceFromGreen())
            }
        }
    }

    return 0;
}