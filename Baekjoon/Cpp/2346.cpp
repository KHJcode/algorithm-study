#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    deque<pair<int, int>> dq;
    int n, i, v, crt, move;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v;
        dq.push_back(make_pair(i + 1, v));
    }
    while (!dq.empty())
    {
        if (dq.size() == n || dq.size() == 1)
        {
            crt = 0;
        }
        else
        {
            if (move >= 0) {
                crt += move - 1;
                crt %= dq.size();
            } else {
                crt = (crt + dq.size() - (abs(move) % dq.size())) % dq.size();
            }
        }
        move = dq[crt].second;
        cout << dq[crt].first << " ";
        dq.erase(dq.begin() + crt);
    }
    return 0;
}
