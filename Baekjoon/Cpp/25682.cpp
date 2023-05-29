#include <bits/stdc++.h>

using namespace std;

vector<int> sum1[2001], sum2[2001];

int main()
{
    int n, m, k, i, j, d1, d2, res = 2147483647;
    char c;
    cin >> n >> m >> k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum1[i].push_back(0);
            sum2[i].push_back(0);
            cin >> c;
            sum1[i][j] = (i % 2) == (j % 2) != (c == 'B');
            sum2[i][j] = (i % 2) != (j % 2) != (c == 'B');
            if (j)
            {
                sum1[i][j] += sum1[i][j - 1];
                sum2[i][j] += sum2[i][j - 1];
            }
        }
    }
    for (j = 0; j < m; j++)
    {
        for (i = 1; i < n; i++)
        {
            sum2[i][j] += sum2[i - 1][j];
            sum1[i][j] += sum1[i - 1][j];
        }
    }
    for (i = 0; i <= n - k; i++)
    {
        for (j = 0; j <= m - k; j++)
        {
            d1 = sum1[i + k - 1][j + k - 1];
            d2 = sum2[i + k - 1][j + k - 1];
            if (i)
            {
                d1 -= sum1[i - 1][j + k - 1];
                d2 -= sum2[i - 1][j + k - 1];
            }
            if (j)
            {
                d1 -= sum1[i + k - 1][j - 1];
                d2 -= sum2[i + k - 1][j - 1];
            }
            if (i && j)
            {
                d1 += sum1[i - 1][j - 1];
                d2 += sum2[i - 1][j - 1];
            }
            res = min(res, min(d1, d2));
        }
    }
    cout << res;
    return 0;
}
