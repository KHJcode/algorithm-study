#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, x, y, n, mx = -1;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            cin >> n;
            if (mx < n) {
                mx = n;
                x = i;
                y = j;
            }
        }
    }
    cout << mx << "\n" << x << " " << y;
    return 0;
}
