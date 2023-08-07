#include <bits/stdc++.h>
#define MAX 17

using namespace std;

int n, r, res = 0, jisu[MAX], arr[MAX][MAX];

void update(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            jisu[i] *= -1;
            continue;
        }
        else if (jisu[i] < 0)
        {
            continue;
        }
        jisu[i] += arr[x][i];
    }
}

void reverse(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            jisu[i] *= -1;
            continue;
        }
        else if (jisu[i] < 0)
        {
            continue;
        }
        jisu[i] -= arr[x][i];
    }
}

void rec(int d, int t)
{
    if (t == n - 1 || jisu[r] < 0)
    {
        res = max(d, res);
    }
    else if (d % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == r || jisu[i] < 0)
            {
                continue;
            }
            update(i);
            rec(d + 1, t + 1);
            reverse(i);
        }
    }
    else
    {
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (jisu[i] < 0)
            {
                continue;
            }
            if (mx == -1 || jisu[mx] < jisu[i])
            {
                mx = i;
            }
        }
        jisu[mx] *= -1;
        rec(d + 1, t + 1);
        jisu[mx] *= -1;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int j, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> jisu[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> r;
    rec(n % 2, 0);
    cout << (res - 1) / 2 + !(n % 2);
    return 0;
}
