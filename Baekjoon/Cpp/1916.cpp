#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;

int dis[100001], mgph[1001][1001];
bool bgph[1001][1001];

struct compare {
    bool operator()(int a, int b) {
        return dis[a] > dis[b];
    }
};

int main() {
    int i, n, m, st, ed, u, v, w;
    vector<int> gph[100001];
    priority_queue<int, vector<int>, compare> pq;
    cin >> n >> m;
    while (m--) {
        cin >> u >> v >> w;
        gph[u].push_back(v);
        if (bgph[u][v]) {
            mgph[u][v] = min(mgph[u][v], w);
        } else {
            bgph[u][v] = true;
            mgph[u][v] = w;
        }
    }
    for (i = 1; i <= n; i++) {
        dis[i] = INF;
    }
    cin >> st >> ed;
    dis[st] = 0;
    pq.push(st);
    while (!pq.empty()) {
        st = pq.top();
        pq.pop();
        for (auto i : gph[st]) {
            if (dis[i] > dis[st] + mgph[st][i]) {
                dis[i] = dis[st] + mgph[st][i];
                pq.push(i);
            }
        }
    }
    cout << dis[ed];
    return 0;
}
