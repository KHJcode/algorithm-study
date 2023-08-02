#include <bits/stdc++.h>
#define INF 9223372036854775807

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using plvl = pair<ll, vector<ll>>;

ll dis[1001], cost[1001][1001];
bool vst[1001][1001];

struct compare
{
    bool operator()(const plvl &a, const plvl &b) const
    {
        return a.first > b.first;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, a, b, c, i, s, e;
    vector<ll> cv, gph[1001];
    plvl cr, res;
    priority_queue<plvl, vector<plvl>, compare> pq;
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b >> c;
        if (a == b)
        {
            continue;
        }
        else if (vst[a][b])
        {
            cost[a][b] = min(cost[a][b], c);
        }
        else
        {
            gph[a].push_back(b);
            vst[a][b] = true;
            cost[a][b] = c;
        }
    }
    cin >> s >> e;
    for (i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    cv.push_back(s);
    dis[s] = 0;
    pq.push(make_pair(0, cv));
    while (pq.empty() == false)
    {
        cr = pq.top();
        cv = cr.second;
        pq.pop();
        c = cv.back();
        if (c == e)
        {
            res = cr;
            break;
        }
        for (auto i : gph[c])
        {
            if (cost[c][i] + cr.first < dis[i])
            {
                dis[i] = cost[c][i] + cr.first;
                cv.push_back(i);
                pq.push(make_pair(dis[i], cv));
                cv.pop_back();
            }
        }
    }
    cout << res.first << "\n";
    b = res.second.size();
    cout << b << "\n";
    for (i = 0; i < b; i++)
    {
        cout << res.second[i] << " ";
    }
    return 0;
}
