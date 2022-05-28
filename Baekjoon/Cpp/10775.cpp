#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll arr[100001];

ll find(ll x) {
    if (arr[x] == x) {
        return x;
    }
    arr[x] = find(arr[x]);
    return arr[x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll g, p, i, d, c = 0;
    cin >> g >> p;
    for (i = 0; i <= g; i++) {
        arr[i] = i;
    }
    for (i = 0; i < p; i++) {
        cin >> d;
        d = find(d);
        if (d == 0) {
            break;
        }
        c++;
        arr[find(d)] = find(d - 1);
    }
    cout << c;
    return 0;
}
