#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

const int unit[7] = {1000000, 100000, 10000, 1000, 100, 10, 1};

pii solve(string &s)
{
    pii res;
    int i, d, len = s.size();
    for (i = 0; i < len; i++)
    {
        d = s[i] - '0';
        res.second += (d == 5 ? 6 : d) * unit[i + 7 - len];
        res.first += (d == 6 ? 5 : d) * unit[i + 7 - len];
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a, b;
    cin >> a >> b;
    pii ans_a = solve(a), ans_b = solve(b);
    cout << ans_a.first + ans_b.first << " " << ans_a.second + ans_b.second;
    return 0;
}
