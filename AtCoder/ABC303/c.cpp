#include <bits/stdc++.h>
#define SALT 200001

using namespace std;
using ull = unsigned long long;

unordered_map<ull, bool> items;

ull key(ull x, ull y) {
    return (x + SALT) * 1000000 + y + SALT;
}

int main() {
    string s;
    int n, m, h, k, i, x, y;
    bool res = true;
    cin >> n >> m >> h >> k >> s;
    for (i = 0; i < m; i++) {
        cin >> x >> y;
        items[key(x, y)] = true;
    }
    x = 0;
    y = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == 'R') {
            x += 1;
        } else if (s[i] == 'L') {
            x -= 1;
        } else if (s[i] == 'U') {
            y += 1;
        } else {
            y -= 1;
        }
        h -= 1;
        if (h < 0) {
            res = false;
            break;
        }
        if (h < k && items[key(x, y)]) {
            h = k;
            items[key(x, y)] = false;
        }
    }
    cout << (res ? "Yes" : "No");
    return 0;
}
