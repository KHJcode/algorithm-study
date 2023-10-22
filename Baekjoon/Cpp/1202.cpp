#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<ll, ll>;

inline bool compare(pii &a, pii &b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, k, m, v, i, j, res = 0;
    priority_queue<ll> pq;
    cin >> n >> k;
    ll bag[k];
    pii dia[n];
    for (i = 0; i < n; i++)
    {
        cin >> m >> v;
        dia[i] = make_pair(m, v);
    }
    for (i = 0; i < k; i++)
    {
        cin >> bag[i];
    }
    sort(bag, bag + k);
    sort(dia, dia + n, compare);
    j = 0;
    for (i = 0; i < k; i++)
    {
        while (j < n && dia[j].first <= bag[i])
        {
            pq.push(dia[j].second);
            j += 1;
        }
        if (!pq.empty())
        {
            res += pq.top();
            pq.pop();
        }
    }
    cout << res;
    return 0;
}
