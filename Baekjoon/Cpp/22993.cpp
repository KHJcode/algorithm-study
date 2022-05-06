#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll c, is;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, d;
    vector<ll> v;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> d;
        if (i)
            v.push_back(d);
        else
            c = d;
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n - 1; i++) {
        if (c <= v[i]) {
            is = 1;
            break;
        } else
            c += v[i];
    }
    cout << (is ? "No" : "Yes");
    return 0;
}
