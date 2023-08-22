#include <bits/stdc++.h>
#define MAX 10001

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, arr[MAX], dp[MAX];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            dp[0] = arr[0];
        }
        else if (i == 1)
        {
            dp[1] = arr[0] + arr[1];
        }
        else if (i == 2)
        {
            dp[2] = max(dp[1], max(dp[0] + arr[2], arr[1] + arr[2]));
        }
        else
        {
            dp[i] = max(dp[i - 1], max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]));
        }
    }
    cout << dp[n - 1];
    return 0;
}
