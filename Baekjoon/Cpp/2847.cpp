#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, i, ans = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] > arr[i])
        {
            continue;
        }
        ans += abs(arr[i + 1] - arr[i]) + 1;
        arr[i] = arr[i + 1] - 1;
    }
    cout << ans;
    return 0;
}
