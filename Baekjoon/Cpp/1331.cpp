#include <iostream>

using namespace std;

int arr[6][6];

int main() {
    char str[3];
    int x, y, cx, cy, sx, sy, fx, fy, i, is = 1;
    for (i = 0; i < 37; i++) {
        if (i < 36) {
            scanf("%s", str);
            x = str[0] - 'A';
            y = str[1] - '1';
        } else {
            x = fx;
            y = fy;
        }
        if (i) {
            sx = max(cx, x) - min(cx, x);
            sy = max(cy, y) - min(cy, y);
            if (!(max(sx, sy) == 2 && min(sx, sy) == 1) || arr[x][y]) {
                is = 0;
                break;
            }
        } else {
            fx = x;
            fy = y;
        }
        cx = x;
        cy = y;
        arr[cx][cy] = !!i;
    }
    cout << (is ? "Valid" : "Invalid");
    return 0;
}
