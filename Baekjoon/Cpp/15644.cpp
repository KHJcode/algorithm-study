#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
using pbpii = pair<bool, pii>;

int gph[11][11];

bool is_equal(pii a, pii b, pii c, pii d)
{
    return a.first == b.first && a.second == b.second && c.first == d.first && c.second == d.second;
}

pbpii up_down(pii tar, pii rck, bool isUp)
{
    bool goal = false;
    int i = tar.first, pt = isUp ? -1 : 1;
    pii res;
    while (gph[i + pt][tar.second] != 1 && ((i + pt) != rck.first || tar.second != rck.second))
    {
        i += pt;
        if (gph[i][tar.second] == 2)
        {
            goal = true;
            break;
        }
    }
    if (gph[i + pt][tar.second] == 2)
    {
        goal = true;
    }
    res = make_pair(i, tar.second);
    return make_pair(goal, res);
}

pbpii left_right(pii tar, pii rck, bool isLeft)
{
    bool goal = false;
    int i = tar.second, pt = isLeft ? -1 : 1;
    pii res;
    while (gph[tar.first][i + pt] != 1 && (tar.first != rck.first || (i + pt) != rck.second))
    {
        i += pt;
        if (gph[tar.first][i] == 2)
        {
            goal = true;
            break;
        }
    }
    if (gph[tar.first][i + pt] == 2)
    {
        goal = true;
    }
    res = make_pair(tar.first, i);
    return make_pair(goal, res);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, j;
    pii b, r;
    pbpii nb, nr;
    vector<char> v;
    pair<vector<char>, pair<pii, pii>> cr;
    queue<pair<vector<char>, pair<pii, pii>>> que;
    bool res = false;
    char c;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> c;
            if (c == '#')
            {
                gph[i][j] = 1;
            }
            else if (c == 'O')
            {
                gph[i][j] = 2;
            }
            else
            {
                gph[i][j] = 0;
                if (c == 'B')
                {
                    b = make_pair(i, j);
                }
                else if (c == 'R')
                {
                    r = make_pair(i, j);
                }
            }
        }
    }
    que.push(make_pair(v, make_pair(b, r)));
    while (!que.empty())
    {
        cr = que.front();
        b = cr.second.first;
        r = cr.second.second;
        vector<char> cv = cr.first;
        que.pop();
        if (cv.size() > 10)
        {
            break;
        }
        else if (gph[r.first][r.second] == 2)
        {
            cout << cv.size() << "\n";
            for (auto c : cv)
            {
                cout << c;
            }
            res = true;
            break;
        }
        nr = up_down(r, b, r.first < b.first);
        nb = up_down(b, nr.second, r.first < b.first);
        if (!nb.first && !is_equal(r, nr.second, b, nb.second))
        {
            cv.push_back(r.first < b.first ? 'U' : 'D');
            que.push(make_pair(cv, make_pair(nb.second, nr.second)));
            cv.pop_back();
        }
        nb = up_down(b, r, r.first >= b.first);
        nr = up_down(r, nb.second, r.first >= b.first);
        if (!nb.first && !is_equal(r, nr.second, b, nb.second))
        {
            cv.push_back(r.first >= b.first ? 'U' : 'D');
            que.push(make_pair(cv, make_pair(nb.second, nr.second)));
            cv.pop_back();
        }
        nr = left_right(r, b, r.second < b.second);
        nb = left_right(b, nr.second, r.second < b.second);
        if (!nb.first && !is_equal(r, nr.second, b, nb.second))
        {
            cv.push_back(r.second < b.second ? 'L' : 'R');
            que.push(make_pair(cv, make_pair(nb.second, nr.second)));
            cv.pop_back();
        }
        nb = left_right(b, r, r.second >= b.second);
        nr = left_right(r, nb.second, r.second >= b.second);
        if (!nb.first && !is_equal(r, nr.second, b, nb.second))
        {
            cv.push_back(r.second >= b.second ? 'L' : 'R');
            que.push(make_pair(cv, make_pair(nb.second, nr.second)));
            cv.pop_back();
        }
    }
    if (!res)
    {
        cout << -1;
    }
    return 0;
}
