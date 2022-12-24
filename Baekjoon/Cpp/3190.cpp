#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll n, p[10001], arr[101][101], ltr[101][101];
vector<pair<ll, ll>> lt;

void put(ll x, ll y) {
    lt.push_back({x, y});
    ltr[y][x] = 1;
}

void rmTail() {
    ltr[lt.front().second][lt.front().first] = 0;
    lt.erase(lt.begin());
}

ll turn(ll c, ll t) {
    c += t;
    if (c < 0) {
        c = 3;
    } else if (c > 3) {
        c = 0;
    }
    return c;
}

bool isOver(ll x, ll y) {
    return x >= n || x < 0 || y >= n || y < 0 || ltr[y][x] == 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll i, j, k, l, x, y, dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
    queue<char> st;
    char c;
    cin >> n >> k;
    for (i = 0; i < k; i++) {
        cin >> x >> y;
        arr[x - 1][y - 1] = 1;
    }
    cin >> l;
    for (i = 0; i < l; i++) {
        cin >> x >> c;
        p[x] = 1;
        st.push(c);
    }
    i = 1;
    j = 0;
    lt.push_back({0, 0});
    while (true) {
        x = lt.back().first + dx[j];
        y = lt.back().second + dy[j];
        if (isOver(x, y)) {
            break;
        }
        put(x, y);
        if (arr[y][x] == 1) {
            arr[y][x] = 0;
        } else {
            rmTail();
        }
        if (p[i] == 1) {
            p[i] = 0;
            if (st.front() == 'D') {
                j = turn(j, 1);
            } else {
                j = turn(j, -1);
            }
            st.pop();
        }
        i += 1;
    }
    cout << i;
    return 0;
}
