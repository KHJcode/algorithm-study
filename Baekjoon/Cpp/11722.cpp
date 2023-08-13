#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i, j, n, res = 1, arr[1001], dp[1001];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
        for (j = n - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
            else if (arr[i] == arr[j] && dp[j] > dp[i])
            {
                dp[i] = dp[j];
            }
        }
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}
