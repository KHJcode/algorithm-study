#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, k, l, d, v, arr[101];
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < m; i++)
    {
        cin >> j >> k;
        if (j == k)
        {
            continue;
        }
        j -= 1;
        k -= 1;
        d = (j + k) / 2;
        for (l = j; l <= d; l++)
        {
            v = arr[l];
            arr[l] = arr[k - (l - j)];
            arr[k - (l - j)] = v;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
