#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll cnt, res;
bool vst[100001];
vector<ll> gph[100001];

bool compare(ll a, ll b)
{
    return a > b;
}

void dfs(ll x, ll d)
{
    if (!vst[x])
    {
        cnt += 1;
        res += cnt * d;
        vst[x] = true;
        for (ll i : gph[x])
        {
            dfs(i, d + 1);
        }
    }
}

int main()
{
    ll n, m, r, u, v, i;
    cin >> n >> m >> r;
    while (m--)
    {
        cin >> u >> v;
        gph[u].push_back(v);
        gph[v].push_back(u);
    }
    for (i = 1; i <= n; i++)
    {
        sort(gph[i].begin(), gph[i].end(), compare);
    }
    dfs(r, 0);
    cout << res;
    return 0;
}
