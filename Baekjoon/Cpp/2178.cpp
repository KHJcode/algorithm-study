#include <iostream>

using namespace std;

int n, m, _min = 10000, arr[101][101], gph[101][101];

void dfs(int x, int y, int c) {
    if (x > 0 && x <= n && y > 0 && y <= m && arr[x][y] && (gph[x][y] > c || gph[x][y] == 0)) {
        gph[x][y] = c;
        c++;
        if (x == n && y == m)
            _min = min(c, _min);
        else {
            dfs(x - 1, y, c);
            dfs(x + 1, y, c);
            dfs(x, y - 1, c);
            dfs(x, y + 1, c);
        }
    }
}

int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf("%1d", &arr[i][j]);
    dfs(1, 1, 0);
    cout << _min;
    return 0;
}
