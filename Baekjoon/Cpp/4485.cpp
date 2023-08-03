#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;
using pii = pair<int, int>;
using pipii = pair<int, pii>;

struct compare
{
    bool operator()(pipii &a, pipii &b)
    {
        return a.first > b.first;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, d, gph[126][126], dis[126][126], dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    priority_queue<pipii, vector<pipii>, compare> pq;
    cin >> n;
    d = 0;
    while (n != 0)
    {
        d += 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> gph[i][j];
                dis[i][j] = INF;
            }
        }
        dis[0][0] = 0;
        pq.push(make_pair(gph[0][0], make_pair(0, 0)));
        while (!pq.empty())
        {
            pipii c = pq.top();
            pii cv = c.second;
            pq.pop();
            if (cv.first == n - 1 && cv.second == n - 1)
            {
                continue;
            }
            for (j = 0; j < 4; j++)
            {
                pii nv = make_pair(cv.first + dx[j], cv.second + dy[j]);
                if (nv.first >= 0 && nv.first < n && nv.second >= 0 && nv.second < n && c.first + gph[nv.first][nv.second] < dis[nv.first][nv.second])
                {
                    dis[nv.first][nv.second] = c.first + gph[nv.first][nv.second];
                    pq.push(make_pair(dis[nv.first][nv.second], nv));
                }
            }
        }
        cout << "Problem " << d << ": " << dis[n - 1][n - 1] << "\n";
        cin >> n;
    }
    return 0;
}
