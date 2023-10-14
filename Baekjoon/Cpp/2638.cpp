#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int n, m, cur, arr[MAX][MAX], visited[MAX][MAX], dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

inline void clear()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
}

inline bool check(int y, int x)
{
    return y >= 0 && y < n && x >= 0 && x < m;
}

void melt(int y, int x)
{
    if (visited[y][x])
    {
        return;
    }
    visited[y][x] += 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (check(ny, nx))
        {
            if (arr[ny][nx] == 0)
            {
                melt(ny, nx);
            }
            else
            {
                visited[ny][nx] += 1;
            }
        }
    }
}

inline void remove()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1 && visited[i][j] >= 2)
            {
                cur += 1;
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int i, j, res = 0, cheeses = 0;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            cheeses += arr[i][j] == 1;
        }
    }
    while (cur < cheeses)
    {
        res += 1;
        melt(0, 0);
        if (cur < cheeses)
        {
            remove();
            clear();
        }
    }
    cout << res;
    return 0;
}
