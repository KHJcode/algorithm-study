#include <bits/stdc++.h>

using namespace std;

int n, m, mp[1001][1001], dy[] = {1, -1, 0, 0}, dx[] = {0, 0, -1, 1};

pair<int, int> vst[1001][1001];

queue<vector<int>> que;

bool check(int y, int x, bool is) {
    return y >= 1 && y <= n && x >= 1 && x <= m && (vst[y][x].first == 0 || (vst[y][x].second && !is));
}

int main() {
    int i, j, ny, nx;
    char c;
    vector<int> v;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> c;
            mp[i][j] = c - 48;
        }
    }
    que.push({1, 1, 0});
    vst[1][1] = {1, 0};
    while (!que.empty()) {
        v = que.front();
        que.pop();
        if (v[0] == n && v[1] == m) {
            break;
        }
        for (i = 0; i < 4; i++) {
            ny = v[0] + dy[i];
            nx = v[1] + dx[i];
            if (check(ny, nx, v[2]) && !(v[2] && mp[ny][nx])) {
                vst[ny][nx] = {vst[v[0]][v[1]].first + 1, v[2] || mp[ny][nx]};
                que.push({ny, nx, v[2] || mp[ny][nx]});
            }
        }
    }
    cout << (vst[n][m].first == 0 ? - 1 : vst[n][m].first);
    return 0;
}
