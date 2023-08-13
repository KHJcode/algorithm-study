#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, j, res = 1, arr[MAX], fdp[MAX], bdp[MAX];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        fdp[i] = 1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i] && fdp[j] + 1 > fdp[i])
            {
                fdp[i] = fdp[j] + 1;
            }
            else if (arr[j] == arr[i] && fdp[j] > fdp[i])
            {
                fdp[i] = fdp[j];
            }
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        bdp[i] = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i] && bdp[j] + 1 > bdp[i])
            {
                bdp[i] = bdp[j] + 1;
            }
            else if (arr[j] == arr[i] && bdp[j] > bdp[i])
            {
                bdp[i] = bdp[j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        res = max(res, bdp[i] + fdp[i] - 1);
    }
    cout << res;
    return 0;
}
