#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<ll> pq;
    ll x, i;
    cin >> x;
    while (x--) {
        cin >> i;
        if (i == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(i);
        }
    }
    return 0;
}
