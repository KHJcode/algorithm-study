#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, i, d, c = 0;
    vector<ll> v;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> d;
        v.push_back(d);
    }
    for (i = n - 1; i > -1; i--) {
        if (k == 0) {
            break;
        }
        if (k >= v[i]) {
            c += k / v[i];
            k %= v[i];
        }
    }
    cout << c;
    return 0;
}
