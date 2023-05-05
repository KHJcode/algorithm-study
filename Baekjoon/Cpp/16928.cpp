#include <bits/stdc++.h>

using namespace std;

queue<int> que;

int vst[101], snk[101], ldr[101];

bool check(int x, int c) {
    return x >= 1 && x <= 100 && (vst[x] == 0 || vst[x] > c);
}

int main() {
    int n, m, i, u, v, d;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> u >> v;
        snk[u] = v;
    }
    for (i = 0; i < m; i++) {
        cin >> u >> v;
        ldr[u] = v;
    }
    que.push(1);
    vst[1] = 1;
    while (!que.empty()) {
        d = que.front();
        que.pop();
        if (d == 100) {
            break;
        }
        if (snk[d]) {
            vst[snk[d]] = vst[d];
            que.push(snk[d]);
        } else if (ldr[d]) {
            vst[ldr[d]] = vst[d];
            que.push(ldr[d]);
        } else {
            for (i = 1; i <= 6; i++) {
                if (check(d + i, vst[d] + 1)) {
                    vst[d + i] = vst[d] + 1;
                    que.push(d + i);
                }
            }
        }
    }
    cout << vst[100] - 1;
    return 0;
}
