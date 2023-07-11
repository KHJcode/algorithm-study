#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll res[5][5];

int main()
{
    ll n, b, i, j, k, arr[5][5], temp[5][5];
    cin >> n >> b;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        res[i][i] = 1;
    }
    while (b)
    {
        if (b % 2)
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    temp[i][j] = 0;
                    for (k = 0; k < n; k++)
                    {
                        temp[i][j] += res[i][k] * arr[k][j];
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    res[i][j] = temp[i][j] % 1000;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                temp[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    temp[i][j] += arr[i][k] * arr[k][j];
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                arr[i][j] = temp[i][j] % 1000;
            }
        }
        b /= 2;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
