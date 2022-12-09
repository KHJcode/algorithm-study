#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll arr[201];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, v;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> v;
        arr[v + 100] += 1;
    }
    cin >> v;
    cout << arr[v + 100];
    return 0;
}
