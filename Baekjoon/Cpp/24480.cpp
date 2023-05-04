#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

priority_queue<int> arr[MAX];

int c = 1, visited[MAX];

void dfs(int x) {
    int d;
    if (visited[x] == 0) {
        visited[x] = c++;
        while (!arr[x].empty()) {
            d = arr[x].top();
            arr[x].pop();
            dfs(d);
        }
    }
}

int main() {
    int i, n, m, r, u, v;
    cin >> n >> m >> r;
    for (i = 0; i < m; i++) {
        cin >> u >> v;
        arr[u].push(v);
        arr[v].push(u);
    }
    dfs(r);
    for (i = 1; i <= n; i++) {
        cout << visited[i] << "\n";
    }
    return 0;
}
