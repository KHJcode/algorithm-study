#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;

int dis[20001];

struct compare {
    bool operator()(int a, int b) {
        return dis[a] > dis[b];
    }
};

int main() {
    int i, V, E, K, u, v, w;
    vector<pair<int, int>> gph[20001];
    pair<int, int> p;
    priority_queue<int, vector<int>, compare> pq;
    cin >> V >> E >> K;
    while (E--) {
        cin >> u >> v >> w;
        gph[u].push_back({v, w});
    }
    for (i = 1; i <= V; i++) {
        dis[i] = INF;
    }
    dis[K] = 0;
    pq.push(K);
    while (!pq.empty()) {
        K = pq.top();
        pq.pop();
        for (auto p : gph[K]) {
            if (dis[p.first] > dis[K] + p.second) {
                dis[p.first] = dis[K] + p.second;
                pq.push(p.first);
            }
        }
    }
    for (i = 1; i <= V; i++) {
        if (dis[i] == INF) {
            cout << "INF" << "\n";
        } else {
            cout << dis[i] << "\n";
        }
    }
    return 0;
}
