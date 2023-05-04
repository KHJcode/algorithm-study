#include <bits/stdc++.h>

using namespace std;

queue<int> que;

int visited[140001];

bool check(int x) {
    return x < 140000 && x > -1 && visited[x] == 0;
}

int main() {
    int x, n, k;
    cin >> n >> k;
    que.push(n);
    visited[n] = 1;
    while (!que.empty()) {
        x = que.front();
        que.pop();
        if (x == k) {
            break;
        }
        if (check(x + 1)) {
            visited[x + 1] = visited[x] + 1;
            que.push(x + 1);
        }
        if (check(x - 1)) {
            visited[x - 1] = visited[x] + 1;
            que.push(x - 1);
        }
        if (check(x * 2)) {
            visited[x * 2] = visited[x] + 1;
            que.push(x * 2);
        }
    }
    cout << visited[k] - 1;
    return 0;
}
