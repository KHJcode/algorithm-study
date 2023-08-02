#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

bool compare(pll a, pll b)
{
    return min(a.first, a.second) < min(b.first, b.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, c, d1, d2, d3, sum = 0, mx = 0, dice[6];
    pll af, cd, be;
    cin >> n;
    for (i = 0; i < 6; i++)
    {
        cin >> dice[i];
        mx = max(dice[i], mx);
        sum += dice[i];
    }
    af = make_pair(dice[0], dice[5]);
    cd = make_pair(dice[2], dice[3]);
    be = make_pair(dice[1], dice[4]);
    pll arr[3] = {af, cd, be};
    sort(arr, arr + 3, compare);
    c = 0;
    if (n == 1)
    {
        cout << sum - mx;
    }
    else
    {
        d1 = min(arr[0].first, arr[0].second);
        d2 = min(arr[1].first, arr[1].second);
        d3 = min(arr[2].first, arr[2].second);
        c += (d1 + d2 + d3) * 4;
        c += (d1 + d2) * (4 + (n - 2) * 8);
        c += d1 * (n * n * 5 - 12 - (4 + (n - 2) * 8) * 2);
        cout << c;
    }
    return 0;
}
