#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v1, v2, r, arr[101];
    ll n, i, d, j, x;
    bool is1, is2;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> d;
        v1.push_back(d);
    }
    for (i = 0; i < n; i++) {
        d = v1[n - i - 1];
        if (d > 2) {
            d -= 2;
        } else {
            d += 2;
        }
        v2.push_back(d);
    }
    cin >> d;
    for (i = 0; i < d; i++) {
        for (j = 0; j < n; j++) {
            cin >> x;
            arr[i].push_back(x);
        }
    }
    for (i = 0; i < d; i++) {
        for (j = 0; j < n; j++) {
            is1 = true;
            is2 = true;
            for (x = 0; x < n; x++) {
                if (arr[i][x] != v1[(x + j) % n]) {
                    is1 = false;
                }
                if (arr[i][x] != v2[(x + j) % n]) {
                    is2 = false;
                }
            }
            if (is1 || is2) {
                r.push_back(i);
            }
        }
    }
    cout << r.size() << "\n";
    for (i = 0; i < r.size(); i++) {
        for (auto d : arr[r[i]]) {
            cout << d << " ";
        }
        cout << "\n";
    }
    return 0;
}
