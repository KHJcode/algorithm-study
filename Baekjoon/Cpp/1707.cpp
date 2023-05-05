#include <bits/stdc++.h>

using namespace std;

int vst[20001];

vector<int> gph[20001];

void dfs(int x, int m) {
    if (vst[x] == 0) {
        vst[x] = m;
        for (int i : gph[x]) {
            dfs(i, m * -1);
        }
    }
}

int main() {
    int k, a, b, v, e, i, is;
    cin >> k;
    while (k--) {
        cin >> v >> e;
        is = 0;
        for (i = 1; i <= v; i++) {
            gph[i].clear();
            vst[i] = 0;
        }
        while (e--) {
            cin >> a >> b;
            gph[a].push_back(b);
            gph[b].push_back(a);
        }
        for (i = 1; i <= v; i++) {
            dfs(i, 1);
        }
        for (i = 1; i <= v; i++) {
            for (int x : gph[i]) {
                if (vst[i] == vst[x]) {
                    is = 1;
                    break;
                }
            }
        }
        cout << (is ? "NO" : "YES") << "\n";
    }
    return 0;
}
