#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, b, c, i, cnt = 0, a[1000001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> b >> c;
    for (i = 0; i < n; i++) {
        cnt += 1;
        a[i] -= b;
        if (a[i] > 0) {
            cnt += a[i] / c + !!(a[i] % c);
        }
    }
    cout << cnt;
    return 0;
}
