#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int main()
{
    deque<pair<int, int>> dq;
    int n, m, i, j, cx, cy, arr[MAX][MAX], dis[MAX][MAX], dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};
    pair<int, int> c;
    char ch;
    cin >> m >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> ch;
            arr[i][j] = ch == '1';
            dis[i][j] = MAX * MAX;
        }
    }
    dq.push_front(make_pair(0, 0));
    dis[0][0] = 0;
    while (!dq.empty())
    {
        c = dq.front();
        dq.pop_front();
        if (c.first == n - 1 && c.second == m - 1)
        {
            break;
        }
        for (i = 0; i < 4; i++)
        {
            cx = c.first + dx[i];
            cy = c.second + dy[i];
            if (cx >= 0 && cy >= 0 && cx < n && cy < m && dis[c.first][c.second] + arr[cx][cy] < dis[cx][cy])
            {
                dis[cx][cy] = dis[c.first][c.second] + arr[cx][cy];
                if (arr[cx][cy] == 0)
                {
                    dq.push_front(make_pair(cx, cy));
                }
                else
                {
                    dq.push_back(make_pair(cx, cy));
                }
            }
        }
    }
    cout << dis[n - 1][m - 1];
    return 0;
}
