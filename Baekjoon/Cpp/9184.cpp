#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[21][21][21];

ll get(ll i, ll j, ll k) {
    if (i <= 0 || j <= 0 || k <= 0) {
        return 1;
    }
    if (i > 20 || j > 20 || k > 20) {
        return arr[20][20][20];
    }
    return arr[i][j][k];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    for (a = 1; a <= 20; a++) {
        for (b = 1; b <= 20; b++) {
            for (c = 1; c <= 20; c++) {
                if (a < b && b < c) {
                    arr[a][b][c] = get(a, b, c - 1) + get(a, b - 1, c - 1) - get(a, b - 1, c);
                } else {
                    arr[a][b][c] = get(a - 1, b, c) + get(a - 1, b - 1, c) + get(a - 1, b, c - 1) - get(a - 1, b - 1, c - 1);
                }
            }
        }
    }
    cin >> a >> b >> c;
    while (a != -1 || b != -1 || c != -1) {
        cout << "w(" << a << ", " << b << ", " << c << ") = " << get(a, b, c) << "\n";
        cin >> a >> b >> c;
    }
    return 0;
}
