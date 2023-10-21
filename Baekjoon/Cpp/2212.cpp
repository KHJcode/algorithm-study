#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, i, res = 0;
    cin >> n >> k;
    int arr[n], dis[n - 1];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (i = 1; i < n; i++)
    {
        dis[i - 1] = arr[i] - arr[i - 1];
    }
    sort(dis, dis + n - 1);
    if (n > k)
    {
        for (i = 0; i < n - k; i++)
        {
            res += dis[i];
        }
    }
    cout << res;
    return 0;
}
