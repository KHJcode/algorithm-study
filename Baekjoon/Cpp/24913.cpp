#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sm, mx, arr[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, q, f, s, t, i, me;
    cin >> n >> q;
    for (i = 0; i < q; i++) {
        cin >> f >> s >> t;
        if (f == 1) {
            arr[t] += s;
            if (t != n + 1) {
                mx = arr[t] > mx ? arr[t] : mx;
                sm += s;
            }
        } else {
            me = arr[n + 1] + s;
            cout << (mx < me && sm + t <= (me - 1) * n ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}
