#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, i, arr[1001];
    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n - k];
    return 0;
}
