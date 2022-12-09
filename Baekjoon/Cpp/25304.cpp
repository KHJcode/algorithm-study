#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, x, a, b;
    cin >> x >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        x -= a * b;
    }
    cout << (x == 0 ? "Yes" : "No");
    return 0;
}
