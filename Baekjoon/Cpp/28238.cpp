#include <bits/stdc++.h>

using namespace std;

int res[6], arr[6][6];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v[6];
    int n, i, j, d;
    pair<int, int> mxp = {0, 1};
    cin >> n;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < 5; i++)
        {
            cin >> d;
            v[i].push_back(d);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            for (d = 0; d < n; d++)
            {
                if (v[i][d] && v[j][d])
                {
                    arr[i][j] += 1;
                }
            }
            if (arr[mxp.first][mxp.second] < arr[i][j])
            {
                mxp = make_pair(i, j);
            }
        }
    }
    res[mxp.first] = 1;
    res[mxp.second] = 1;
    cout << arr[mxp.first][mxp.second] << "\n";
    for (i = 0; i < 5; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
