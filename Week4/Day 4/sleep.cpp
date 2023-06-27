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
        int n, H, M;
        cin >> n >> H >> M;
        pair<int, int> inputTime, ans;
        ans.first = 1e8;
        ans.second = 1e8;

        for (int i = 0; i < n; i++)
        {
            cin >> inputTime.first >> inputTime.second;

            if (inputTime.first >= H)
            {
                inputTime.first = inputTime.first - H;

                if (inputTime.second >= M)
                {
                    inputTime.second = inputTime.second - M;
                }
                else
                {
                    inputTime.second = inputTime.second - M + 60;
                    inputTime.first--;

                    if (inputTime.first < 0)
                    {
                        inputTime.first += 24;
                    }
                }
            }
            else if (inputTime.first < H)
            {
                inputTime.first = inputTime.first - H + 24;

                if (inputTime.second >= M)
                {
                    inputTime.second = inputTime.second - M;
                }
                else
                {
                    inputTime.second = inputTime.second - M + 60;
                    inputTime.first--;
                    if (inputTime.first < 0)
                    {
                        inputTime.first += 24;
                    }
                }
            }

            if (inputTime.first < ans.first)
            {
                ans.first = inputTime.first;
                ans.second = inputTime.second;
            }
            else if (inputTime.first == ans.first)
            {
                ans.second = min(ans.second, inputTime.second);
            }
        }
        cout << ans.first << ' ' << ans.second << endl;
    }

    return 0;
}
