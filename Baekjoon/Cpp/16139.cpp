#include <bits/stdc++.h>

#define length 26
#define ascii 97

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll n, i, j, l, r;
    vector<ll> v[length];
    char a;
    cin >> s >> n;
    for (i = 0; i < s.size(); i++) {
        for (j = 0; j < length; j++) {
            if (i) {
                v[j].push_back(v[j][v[j].size() - 1]);
            } else {
                v[j].push_back(0);
            }
        }
        j = ll(s[i]) - ascii;
        v[j][v[j].size() - 1] += 1;
    }
    for (i = 0; i < n; i++) {
        cin >> a >> l >> r;
        j = ll(a) - ascii;
        cout << (v[j][r] - (l == 0 ? 0 : v[j][l - 1])) << "\n";
    }
    return 0;
}
