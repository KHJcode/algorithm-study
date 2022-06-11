#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll arr[1000001];

vector<ll> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, t, c;
    arr[1] = 1;
    for (i = 2; i * i < 1000001; i++) {
        if (arr[i]) {
            continue;
        }
        for (j = i * i; j < 1000001; j += i) {
            arr[j] = 1;
        }
    }
    for (i = 2; i < 1000001; i++) {
        if (arr[i] == 0) {
            v.push_back(i);
        }
    }
    cin >> t;
    while (t--) {
        c = 0;
        cin >> i;
        for (auto &j: v) {
            if (i <= j) {
                break;
            }
            if (arr[i - j] == 0) {
                c++;
            }
        }
        cout << c / 2 + c % 2 << "\n";
    }
    return 0;
}
