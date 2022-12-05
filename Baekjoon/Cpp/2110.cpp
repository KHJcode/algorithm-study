#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, c, i, s = 1, e, m, d = 1, l, cnt, arr[200001];
    cin >> n >> c;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    e = arr[n - 1] - arr[0];
    while (s <= e) {
        m = (s + e) / 2;
        cnt = 1;
        l = arr[0];
        for (i = 1; i < n; i++) {
            if (arr[i] - l >= m) {
                cnt += 1;
                l = arr[i];
            }
        }
        if (cnt >= c) {
            d = max(d, m);
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    cout << d;
    return 0;
}
