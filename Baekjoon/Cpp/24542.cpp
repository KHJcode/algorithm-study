#include <bits/stdc++.h>

#define MAX 200001

typedef long long ll;

using namespace std;

vector<ll> vt[MAX];
ll st, sre[MAX], gph[MAX];

void dfs(ll n, ll s) {
    if (gph[n]) return;
    gph[n] = s;
    sre[s]++;
    for (auto i: *&vt[n])
        dfs(i, s);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, u, v;
    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> u >> v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    for (i = 1; i <= n; i++)
        if (!gph[i])
            dfs(i, ++st);
    v = 1;
    for (i = 1; i <= st; i++)
        v = (v * sre[i]) % 1000000007;
    cout << v;
    return 0;
}
