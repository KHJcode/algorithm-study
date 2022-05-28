#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, b = 0;
    cin >> n;
    while (n % 5 && n >= 3) {
        n -= 3;
        b++;
    }
    cout << (n % 5 ? - 1 : b +  n / 5);
    return 0;
}
