#include <bits/stdc++.h>

using namespace std;

int res[101][101];

int main()
{
    int n, m, k, i, j, x, arr1[101][101], arr2[101][101];
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cin >> m >> k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < k; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            for (x = 0; x < m; x++)
            {
                res[i][j] += arr1[i][x] * arr2[x][j];
            }
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
