#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, i, j, n, s, arr[101];
    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        s = 0;
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                s += gcd(arr[i], arr[j]);
            }
        }
        cout << s << "\n";
    }
    return 0;
}
