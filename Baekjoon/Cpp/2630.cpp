#include <bits/stdc++.h>

using namespace std;

int w, b, arr[129][129];

void rec(int sx, int sy, int d) {
    int i, j, c = 0;
    for (i = sy; i < sy + d; i++) {
        for (j = sx; j < sx + d; j++) {
            c += arr[i][j];
        }
    }
    if (c == 0) {
        w += 1;
    } else if (c == d * d) {
        b += 1;
    } else if (d == 2) {
        b += c;
        w += 4 - c;
    } else {
        d /= 2;
        rec(sx, sy, d);
        rec(sx + d, sy, d);
        rec(sx, sy + d, d);
        rec(sx + d, sy + d, d);
    }
}

int main() {
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    rec(0, 0, n);
    cout << w << "\n" << b;
    return 0;
}
