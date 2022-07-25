#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<pair<ll, ll>> dq;
    ll n, k, i, l, j = 0;
    cin >> n >> k;
    for (i = 0; i < n * 2; i++) {
        cin >> l;
        dq.push_back({0, l});
    }
    while (true) {
        j++;
        dq.push_front(dq.back());
        dq.pop_back();
        if (dq[n - 1].first) {
            dq[n - 1] = dq[n - 1] = {0, dq[n - 1].second};
        }
        for (i = n - 2; i > -1; i--) {
            if (dq[i].first && dq[i + 1].first == 0 && dq[i + 1].second) {
                dq[i] = {0, dq[i].second};
                dq[i + 1] = {1, dq[i + 1].second - 1};
                if (i == n - 2) {
                    dq[i + 1] = {0, dq[i + 1].second};
                }
            }
        }
        if (dq[0].second) {
            dq[0] = {1, dq[0].second - 1};
        }
        l = 0;
        for (i = 0; i < n * 2; i++) {
            if (dq[i].second == 0) {
                l++;
            }
        }
        if (l >= k) {
            break;
        }
    }
    cout << j;
    return 0;
}
