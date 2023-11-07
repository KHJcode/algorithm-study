#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, i, init = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        if (init + 1 < arr[i])
        {
            break;
        }
        init += arr[i];
    }
    cout << init + 1;
    return 0;
}
