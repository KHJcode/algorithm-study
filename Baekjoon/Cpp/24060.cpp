#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll k, arr[500001];

void save(ll i, ll x) {
    arr[i] = x;
    k--;
    if (k == 0) {
        cout << x;
    }
}

void merge(ll s, ll m, ll e) {
    ll i = s, j = m + 1, t = 1, tmp[500001];
    while (i <= m && j <= e) {
        if (arr[i] <= arr[j]) {
            tmp[t] = arr[i];
            i++;
        } else {
            tmp[t] = arr[j];
            j++;
        }
        t++;
    }
    while (i <= m) {
        tmp[t++] = arr[i++];
    }
    while (j <= e) {
        tmp[t++] = arr[j++];
    }
    i = s;
    t = 1;
    while (i <= e) {
        save(i++, tmp[t++]);
    }
}

void merge_sort(ll s, ll e) {
    if (s < e) {
        ll m = (s + e) / 2;
        merge_sort(s, m);
        merge_sort(m + 1, e);
        merge(s, m, e);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i;
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    merge_sort(0, n - 1);
    if (k > 0) {
        cout << -1;
    }
    return 0;
}
