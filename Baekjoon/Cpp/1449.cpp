#include <bits/stdc++.h>

using namespace std;

bool marked[2001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, l, i, j, res = 0;
    cin >> n >> l;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (marked[arr[i]])
        {
            continue;
        }
        for (j = arr[i]; j < arr[i] + l; j++)
        {
            marked[j] = true;
        }
        res += 1;
    }
    cout << res;
    return 0;
}
