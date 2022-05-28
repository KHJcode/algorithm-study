#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, c = 0, arr[7] = {500, 100, 50, 10, 5, 1};
    cin >> n;
    n = 1000 - n;
    for (i = 0; i < 7; i++) {
        if (n == 0) {
            break;
        }
        if (n >= arr[i]) {
            c += n / arr[i];
            n %= arr[i];
        }
    }
    cout << c;
    return 0;
}
