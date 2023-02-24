#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, t, arr[101];
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    while (m--)
    {
        cin >> i >> j;
        i -= 1;
        j -= 1;
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
