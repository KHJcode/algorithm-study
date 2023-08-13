#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, i, s, e, m, size;
    vector<int> res;
    cin >> n;
    int arr[n + 1], lis[n + 1], dp[n + 1];
    size = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            if (lis[size - 1] < arr[i])
            {
                size += 1;
                lis[size - 1] = arr[i];
                dp[i] = size - 1;
            }
            else
            {
                s = 0;
                e = size - 1;
                while (s < e)
                {
                    m = (s + e) / 2;
                    if (lis[m] >= arr[i])
                    {
                        e = m;
                    }
                    else
                    {
                        s = m + 1;
                    }
                }
                lis[e] = arr[i];
                dp[i] = e;
            }
        }
        else
        {
            size += 1;
            lis[0] = arr[0];
            dp[0] = 0;
        }
    }
    cout << size << "\n";
    i = n - 1;
    while (size--)
    {
        while (dp[i] != size)
        {
            i -= 1;
        }
        res.push_back(arr[i]);
    }
    for (i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    return 0;
}
