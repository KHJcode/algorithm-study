#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    ll res;
    cin >> n;
    if (n > 1)
    {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        int x, a, b;
        while (n--)
        {
            cin >> x;
            pq.push(x);
        }
        res = 0;
        while (pq.size() > 1)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            pq.push(a + b);
            res += a + b;
        }
    }
    else
    {
        cin >> res;
    }
    cout << (n == 1 ? 0 : res);
    return 0;
}
