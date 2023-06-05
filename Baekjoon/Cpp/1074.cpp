#include <bits/stdc++.h>

using namespace std;

int r, c, cnt = 0;

void rec(int y, int x, int m) {
    if (m == 1) {
        if (r == y && c == x) {
            cout << cnt;
        }
        cnt += 1;
    } else {
        if (y <= r && r < y + m / 2 && x <= c && c < x + m / 2) {
            rec(y, x, m / 2);
        } else if (y <= r && r < y + m / 2 && x + m / 2 <= c && c < x + m) {
            cnt += (m / 2) * (m / 2);
            rec(y, x + m / 2, m / 2);
        } else if (y + m / 2 <= r && r < y + m && x <= c && c < x + m / 2) {
            cnt += (m / 2) * (m / 2) * 2;
            rec(y + m / 2, x, m / 2);
        } else {
            cnt += (m / 2) * (m / 2) * 3;
            rec(y + m / 2, x + m / 2, m / 2);
        }
    }
}

int main() {
    int n;
    cin >> n >> r >> c;
    rec(0, 0, 1 << n);
    return 0;
}
