#include <bits/stdc++.h>

using namespace std;

int n, arr[101][101];
bool vst[101][101], mp[101];

void find(int x, int y, int l)
{
    if (!vst[x][y] && arr[x][y] > l && x > -1 && x < n && y > -1 && y < n)
    {
        vst[x][y] = true;
        find(x + 1, y, l);
        find(x - 1, y, l);
        find(x, y + 1, l);
        find(x, y - 1, l);
    }
}

void vst_clear()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            vst[i][j] = false;
        }
    }
}

int main()
{
    int i, j, k, c, res = 1, mn = 101, mx = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            mp[arr[i][j]] = true;
            mn = min(arr[i][j], mn);
            mx = max(arr[i][j], mx);
        }
    }
    for (k = mn; k < mx; k++)
    {
        if (!mp[k])
        {
            continue;
        }
        c = 0;
        vst_clear();
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (!vst[i][j] && arr[i][j] > k)
                {
                    c += 1;
                    find(i, j, k);
                }
            }
        }
        res = max(c, res);
    }
    cout << res;
    return 0;
}
