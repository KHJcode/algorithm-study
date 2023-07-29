#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;
using ll = long long;

vector<pair<ll, ll>> gph[801];
ll n, dis[801];

struct compare
{
    bool operator()(ll a, ll b)
    {
        return dis[a] > dis[b];
    }
};

void dijkstra(ll s)
{
    pair<ll, ll> pi;
    priority_queue<ll, vector<ll>, compare> pq;
    ll c, i;
    for (i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dis[s] = 0;
    pq.push(s);
    while (!pq.empty())
    {
        c = pq.top();
        pq.pop();
        for (auto pi : gph[c])
        {
            if (dis[c] + pi.second < dis[pi.first])
            {
                dis[pi.first] = dis[c] + pi.second;
                pq.push(pi.first);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    pair<ll, ll> pi;
    ll e, a, b, c, atob, stoa, stob, atoe, btoe, res = INF;
    cin >> n >> e;
    while (e--)
    {
        cin >> a >> b >> c;
        gph[a].push_back(make_pair(b, c));
        gph[b].push_back(make_pair(a, c));
    }
    cin >> a >> b;
    dijkstra(a);
    atob = dis[b];
    atoe = dis[n];
    dijkstra(1);
    stoa = dis[a];
    stob = dis[b];
    dijkstra(b);
    btoe = dis[n];
    res = min(res, min(stoa + atob + btoe, stob + atob + atoe));
    cout << (res == INF ? -1 : res);
    return 0;
}
