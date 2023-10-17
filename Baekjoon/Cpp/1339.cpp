#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mx(ll a, ll b)
{
    return a > b ? a : b;
}

unordered_map<char, int> mp;
vector<char> vc;

bool compare(char &a, char &b)
{
    return mp[a] > mp[b];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, i, j, x, d, res = 0, mxl = 0;
    string s;
    vector<string> vs;
    char c;
    cin >> n;
    unordered_set<char> chars;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        vs.push_back(s);
        mxl = mx(mxl, s.size());
        x = s.size();
        for (j = 0; j < x; j++)
        {
            mp[s[j]] = 0;
            chars.insert(s[j]);
        }
    }
    d = 1;
    for (i = 1; i < mxl; i++)
    {
        d *= 10;
    }
    for (i = mxl; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            x = vs[j].size();
            if (x < i)
            {
                continue;
            }
            mp[vs[j][x - i]] += d;
        }
        d /= 10;
    }
    for (auto c : chars)
    {
        vc.push_back(c);
    }
    sort(vc.begin(), vc.end(), compare);
    x = vc.size();
    j = 9;
    for (i = 0; i < x; i++)
    {
        res += mp[vc[i]] * j--;
    }
    cout << res;
    return 0;
}
