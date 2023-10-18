#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

inline bool compare(pii &a, pii &b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, i, a, b;
    cin >> n;
    pii times[n];
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        times[i] = make_pair(a, b);
    }
    sort(times, times + n, compare);
    pq.push(times[0].second);
    for (i = 1; i < n; i++)
    {
        pq.push(times[i].second);
        if (pq.top() <= times[i].first)
        {
            pq.pop();
        }
    }
    cout << pq.size();
    return 0;
}
