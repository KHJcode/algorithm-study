#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool compare(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a, b, c = 0, l = -1000000001;
    vector<pair<ll, ll>> v;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), compare);
    for (i = 0; i < n; i++) {
        if (v[i].second > l) {
            if (l <= v[i].first) {
                c += v[i].second - v[i].first;
            } else {
                c += v[i].second - l;
            }
            l = v[i].second;
        }
    }
    cout << c;
    return 0;
}
