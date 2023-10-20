#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, i, d, len, res = 0;
    bool zero = false;
    vector<int> p_arr, n_arr;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> d;
        if (d == 0)
        {
            zero = true;
        }
        else if (d > 0)
        {
            p_arr.push_back(d);
        }
        else
        {
            n_arr.push_back(d);
        }
    }
    sort(p_arr.begin(), p_arr.end());
    sort(n_arr.begin(), n_arr.end());
    len = p_arr.size();
    for (i = len - 1; i > 0; i -= 2)
    {
        if (p_arr[i - 1] == 1 || p_arr[i] == 1)
        {
            res += p_arr[i] + 1;
            continue;
        }
        res += p_arr[i] * p_arr[i - 1];
    }
    if (len % 2 == 1)
    {
        res += p_arr[0];
    }
    len = n_arr.size();
    for (i = 0; i < len - 1; i += 2)
    {
        res += n_arr[i] * n_arr[i + 1];
    }
    if (len % 2 == 1 && !zero)
    {
        res += n_arr[len - 1];
    }
    cout << res;
    return 0;
}
