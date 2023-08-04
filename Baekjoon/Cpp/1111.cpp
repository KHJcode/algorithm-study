#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, k, arr[51];
    unordered_set<ll> res;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "A";
    }
    else
    {
        for (i = -20000; i <= 20000; i++)
        {
            unordered_set<ll> now;
            for (k = 1; k < n; k++)
            {
                now.insert(arr[k] - arr[k - 1] * i);
            }
            if (now.size() == 1)
            {
                res.insert(arr[n - 1] * i + *(now.begin()));
                if (res.size() >= 2)
                {
                    i = 20001;
                    break;
                }
            }
        }
        if (res.empty())
        {
            cout << "B";
        }
        else
        {
            if (res.size() == 1)
            {
                cout << *(res.begin());
            }
            else
            {
                cout << "A";
            }
        }
    }
    return 0;
}
