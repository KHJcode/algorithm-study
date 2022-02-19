#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, i, j, c, l, nw[626], arr[26][26], gph[26][26];
vector<int> v;

void dfs(int x, int y, int b) {
    if (x > 0 && y > 0 && x <= n && y <= n && gph[x][y] == 0 && arr[x][y]) {
        gph[x][y] = b;
        dfs(x + 1, y, b);
        dfs(x - 1, y, b);
        dfs(x, y + 1, b);
        dfs(x, y - 1, b);
    }
}

int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%1d", &arr[i][j]);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            dfs(i, j, ++l);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (arr[i][j]) {
                if (nw[gph[i][j]] == 0) {
                    c++;
                    nw[gph[i][j]] = 1;
                } else nw[gph[i][j]]++;
            }
        }
    }
    cout << c << "\n";
    for (i = 1; i <= n * n; i++)
        if (nw[i])
            v.push_back(nw[i]);
    sort(v.begin(), v.end());
    for (auto i: v)
        cout << i << "\n";
    return 0;
}
