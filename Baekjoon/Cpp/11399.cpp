#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, s = 0, arr[1001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (i = 0; i < n; i++) {
        if (i) {
            arr[i] += arr[i - 1];
        }
        s += arr[i];
    }
    cout << s;
    return 0;
}
