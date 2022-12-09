#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll c, arr[101][101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b;
        for (j = a; j < a + 10; j++) {
            for (k = b; k < b + 10; k++) {
                if (arr[j][k] == 0) {
                    arr[j][k] = 1;
                    c++;
                }
            }
        }  
    }
    cout << c;
    return 0;
}
