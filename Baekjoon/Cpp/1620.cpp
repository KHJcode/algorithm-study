#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    vector<string> sm;
    unordered_map<string, ll> um;
    ll n, m, i;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cin >> s;
        sm.push_back(s);
        um[s] = i;
    }
    while (m--) {
        cin >> s;
        i = (ll) (s[0]);
        if (58 > i && i > 47) {
            cout << sm[stoi(s) - 1] << "\n";
        } else {
            cout << um[s] << "\n";
        }
    }
    return 0;
}