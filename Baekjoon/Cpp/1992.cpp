#include <bits/stdc++.h>

using namespace std;

int arr[65][65];

void rec(int y, int x, int s) {
    bool is = true;
    int i, j, f = arr[y][x];
    for (i = y; i < y + s; i++) {
        for (j = x; j < x + s; j++) {
            if (arr[i][j] != f) {
                is = false;
                break;
            }
        }
        if (!is) {
            break;
        }
    }
    if (is) {
        cout << f;
    } else {
        cout << "(";
        rec(y, x, s / 2);
        rec(y, x + s / 2, s / 2);
        rec(y + s / 2, x, s / 2);
        rec(y + s / 2, x + s / 2, s / 2);
        cout << ")";
    }
}

int main() {
    int n, i, j;
    char c;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> c;
            arr[i][j] = c == '1';
        }
    }
    rec(0, 0, n);
    return 0;
}
