#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, r, c, d, i, j, k, res = 0, arr[51][51], dy[] = {-1, 0, 1, 0}, dx[] = {0, -1, 0, 1};
    cin >> n >> m >> r >> c >> d;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    i = r;
    j = c;
    if (d == 1)
    {
        d = 3;
    }
    else if (d == 3)
    {
        d = 1;
    }
    while (true)
    {
        if (arr[i][j] == 0)
        {
            res += 1;
            arr[i][j] = -1;
        }
        bool is_clear = true;
        for (k = 1; k < 5; k++)
        {
            int cy = dy[(k + d) % 4] + i;
            int cx = dx[(k + d) % 4] + j;
            if (cy < 0 || cx < 0 || cy >= n || cx >= m)
            {
                continue;
            }
            else if (arr[cy][cx] == 0)
            {
                i = cy;
                j = cx;
                d = (k + d) % 4;
                is_clear = false;
                break;
            }
        }
        if (is_clear)
        {
            int cy = dy[(2 + d) % 4] + i;
            int cx = dx[(2 + d) % 4] + j;
            if (arr[cy][cx] == 1)
            {
                break;
            }
            i = cy;
            j = cx;
        }
    }
    cout << res;
    return 0;
}
