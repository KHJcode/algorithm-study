#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll c1, c2;

ll fib1(ll n) {
    if (n == 1 || n == 2) {
        c1 += 1;
        return 1;
    }
    return fib1(n - 1) + fib1(n - 2);
}

ll fib2(ll n) {
    ll i, arr[41];
    arr[0] = arr[1] = 1;
    for (i = 3; i <= n; i++) {
        c2 += 1;
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    fib1(n);
    fib2(n);
    cout << c1 << " " << c2;
    return 0;
}
