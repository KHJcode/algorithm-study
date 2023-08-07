#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gph1[10001], gph2[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x, k, i, d, res = 0;
    vector<ll> arr1, arr2;
    cin >> x >> k;
    for (i = 0; i < x; i++)
    {
        cin >> d;
        if (gph1[d] == 0)
        {
            arr1.push_back(d);
        }
        gph1[d] += 1;
    }
    for (i = 0; i < x; i++)
    {
        cin >> d;
        if (gph2[d] == 0)
        {
            arr2.push_back(d);
        }
        gph2[d] += 1;
    }
    for (auto i : arr1)
    {
        for (auto d : arr2)
        {
            if (i != d)
            {
                res += gph1[i] * gph2[d];
            }
        }
    }
    cout << res;
    return 0;
}
