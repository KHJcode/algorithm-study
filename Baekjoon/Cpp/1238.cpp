#include <bits/stdc++.h>
#define INF 2147483647

using namespace std;

int n, dis[1001], mgph[1001][1001];

struct compare {
    bool operator()(int a, int b) {
        return dis[a] > dis[b];
    }
};

priority_queue<int, vector<int>, compare> pq;
vector<int> gph[1001];
bool bgph[1001][1001];

int get_min_dis(int st, int ed) {
    int i;
    for (i = 1; i <= n; i++) {
        dis[i] = INF;
    }
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
    return dis[ed];
}

int main() {
    int x, m, i, u, v, w, res = 0;
    cin >> n >> m >> x;
    for (i = 0; i < m; i++) {
        cin >> u >> v >> w;
        gph[u].push_back(v);
        if (bgph[u][v]) {
            mgph[u][v] = min(mgph[u][v], w);
        } else {
            mgph[u][v] = w;
            bgph[u][v] = true;
        }
    }
    for (i = 1; i <= n; i++) {
        if (i == x) {
            continue;
        }
        res = max(res, get_min_dis(i, x) + get_min_dis(x, i));
    }
    cout << res;
    return 0;
}
