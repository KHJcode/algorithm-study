#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, k;
    cin >> n >> m;
    while (m--)
    {
        cin >> i >> j >> k;
        i -= 1;
        j -= 1;
        for (; i <= j; i++)
        {
            arr[i] = k;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
