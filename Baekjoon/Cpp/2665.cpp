#include <bits/stdc++.h>
#define MAX 51

using namespace std;

int main()
{
    deque<pair<int, int>> dq;
    pair<int, int> c;
    char ch;
    int n, i, j, nx, ny, arr[MAX][MAX], dis[MAX][MAX], dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> ch;
            arr[i][j] = ch == '0';
            dis[i][j] = MAX * MAX;
        }
    }
    dis[0][0] = 0;
    dq.push_front(make_pair(0, 0));
    while (!dq.empty())
    {
        c = dq.front();
        dq.pop_front();
        if (c.first == n - 1 && c.second == n - 1)
        {
            break;
        }
        for (i = 0; i < 4; i++)
        {
            nx = c.first + dx[i];
            ny = c.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && arr[nx][ny] + dis[c.first][c.second] < dis[nx][ny])
            {
                dis[nx][ny] = arr[nx][ny] + dis[c.first][c.second];
                if (arr[nx][ny])
                {
                    dq.push_back(make_pair(nx, ny));
                }
                else
                {
                    dq.push_front(make_pair(nx, ny));
                }
            }
        }
    }
    cout << dis[n - 1][n - 1];
    return 0;
}
