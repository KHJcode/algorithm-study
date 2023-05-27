#include <bits/stdc++.h>
 
using namespace std;
 
int rec[51][51];
 
int main() {
    int n, m, i, j, k, a, b, c = 0, arr[51][51];
    cin >> n >> m;
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            cin >> arr[j][i];
        }
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < n - 2; i++) {
            for (k = i + 2; k < n; k++) {
                a = min(arr[j][k], arr[j][i]);
                b = max(arr[j][k], arr[j][i]);
                rec[a][b] += 1;
            }
        }
    }
    for (j = 1; j <= n - 1; j++) {
        for (i = j + 1; i <= n; i++) {
            if (rec[j][i] == m) {
                c += 1;
            }
        }
    }
    cout << c;
    return 0;
}
