#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, s, c = 0, n, m, arr[10001], sum[10001];
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            sum[i] = arr[i] + sum[i - 1];
        }
        else
        {
            sum[i] = arr[i];
        }
    }
    for (i = -1; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            s = sum[j];
            if (i > -1)
            {
                s -= sum[i];
            }
            if (s == m)
            {
                c += 1;
                continue;
            }
        }
    }
    cout << c;
    return 0;
}
