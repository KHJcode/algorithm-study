#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j, d, arr[101][101];
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> d;
            arr[i][j] += d;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
