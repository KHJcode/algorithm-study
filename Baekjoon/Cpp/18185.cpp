#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll mn(ll a, ll b) {
    return a < b ? a : b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, d, c = 0, arr[10001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (i = n - 1; i > 1; i--) {
        if (arr[i - 1] > arr[i - 2]) {
            d = mn(arr[i - 1] - arr[i - 2], arr[i]);
            arr[i] -= d;
            arr[i - 1] -= d;
            c += d * 5;
        }
        d = mn(arr[i], mn(arr[i - 1], arr[i - 2]));
        arr[i] -= d;
        arr[i - 1] -= d;
        arr[i - 2] -= d;
        c += d * 7;
    }
    for (i = n - 1; i > 0; i--) {
        d = mn(arr[i], arr[i - 1]);
        arr[i] -= d;
        arr[i - 1] -= d;
        c += d * 5;
    }
    for (i = n - 1; i > -1; i--) {
        c += arr[i] * 3;
    }
    cout << c;
    return 0;
}
