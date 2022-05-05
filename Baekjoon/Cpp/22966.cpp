#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, d, md = 5;
    string p, mp;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> p >> d;
        if (md > d) {
            mp = p;
            md = d;
        }
    }
    cout << mp;
    return 0;
}
