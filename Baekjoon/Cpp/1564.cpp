#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, c = 1;
    cin >> n;
    for (; n > 0; n--) {
        c *= n;
        while (c % 10 == 0) {
            c /= 10;
        }
        c %= 1000000000000;
    }
    printf("%05lld", c % 100000);
    return 0;
}
