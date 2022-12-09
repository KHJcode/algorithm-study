#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, s = 0, arr[6];
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    sort(arr, arr + 5);
    cout << s / 5 << "\n" << arr[2];
    return 0;
}
