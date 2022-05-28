#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool compare(pair<ll, ll> a, pair<ll, ll> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a, b, t, c = 1;
    vector<pair<ll, ll>> v;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), compare);
    t = v[0].second;
    for (i = 1; i < n; i++) {
        if (v[i].first >= t) {
            t = v[i].second;
            c++;
        }
    }
    cout << c;
    return 0;
}
