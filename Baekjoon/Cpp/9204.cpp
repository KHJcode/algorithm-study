#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<long, long>;

vector<pll> res;

void bfs(pll s, pll e)
{
    queue<vector<pll>> que;
    vector<pll> c;
    pll cr;
    ll i, j;
    que.push({s});
    while (!que.empty())
    {
        c = que.front();
        que.pop();
        cr = c[c.size() - 1];
        if (cr.first == e.first && cr.second == e.second)
        {
            res = c;
            break;
        }
        for (i = cr.first, j = cr.second; i < 9 && j < 9; i += !!(j++))
        {
            c.push_back({i, j});
            que.push(c);
            c.pop_back();
        }
        for (i = cr.first - 1, j = cr.second - 1; i > 0 && j > 0; i -= !!(j--))
        {
            c.push_back({i, j});
            que.push(c);
            c.pop_back();
        }
        for (i = cr.first, j = cr.second; i < 9 && j > 0; i += !!(j--))
        {
            c.push_back({i, j});
            que.push(c);
            c.pop_back();
        }
        for (i = cr.first - 1, j = cr.second + 1; i > 0 && j < 9; i -= !!(j++))
        {
            c.push_back({i, j});
            que.push(c);
            c.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, i, x1, x2, y1, y2;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> c;
        x1 = c - 64;
        cin >> y1;
        y1 = 9 - y1;
        cin >> c;
        x2 = c - 64;
        cin >> y2;
        y2 = 9 - y2;
        if (abs(x1 - x2) % 2 == abs(y1 - y2) % 2)
        {
            bfs({x1, y1}, {x2, y2});
        }
        if (res.empty())
        {
            cout << "Impossible";
        }
        else
        {
            cout << res.size() - 1;
            for (i = 0; i < res.size(); i++)
            {
                cout << " " << char(res[i].first + 64) << " " << 9 - res[i].second;
            }
            res.clear();
        }
        cout << "\n";
    }
    return 0;
}
