#include <bits/stdc++.h>

using namespace std;

vector<int> arr[2188];
int res[3];

void rec(int si, int sj, int x)
{
    bool safe = true;
    int i, j, str = arr[si][sj];
    if (x > 1)
    {
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < x; j++)
            {
                if (arr[si + i][sj + j] != str)
                {
                    safe = false;
                    break;
                }
            }
            if (!safe)
            {
                break;
            }
        }
    }
    if (safe)
    {
        res[str + 1] += 1;
    }
    else
    {
        for (i = 0; i < x; i += (x / 3))
        {
            for (j = 0; j < x; j += (x / 3))
            {
                rec(si + i, sj + j, x / 3);
            }
        }
    }
}

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i].push_back(0);
            cin >> arr[i][j];
        }
    }
    rec(0, 0, n);
    cout << res[0] << "\n";
    cout << res[1] << "\n";
    cout << res[2] << "\n";
    return 0;
}
