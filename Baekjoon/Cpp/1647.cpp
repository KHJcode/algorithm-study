#include <bits/stdc++.h>

using namespace std;
using road = pair<pair<int, int>, int>;

int arr[100001];

void init(int n) {
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
}

int find(int x) {
    if (arr[x] == x) {
        return x;
    }
    return arr[x] = find(arr[x]);
}

void merge(int a, int b) {
    int ax = find(a);
    int bx = find(b);
    if (ax != bx) {
        int child = max(ax, bx);
        int parent = min(ax, bx);
        arr[child] = parent;
    }
}

bool compare(road a, road b) {
    return a.second < b.second;
}

int main() {
    vector<road> roads;
    road r;
    int n, m, i, a, b, c;
    cin >> n >> m;
    init(n);
    for (i = 0; i < m; i++) {
        cin >> a >> b >> c;
        roads.push_back(make_pair(make_pair(a, b), c));
    }
    c = 0;
    sort(roads.begin(), roads.end(), compare);
    for (i = 0; i < roads.size(); i++) {
        r = roads[i];
        if (find(r.first.first) != find(r.first.second)) {
            merge(r.first.first, r.first.second);
            b = r.second;
            c += b;
        }
    }
    cout << c - b;
    return 0;
}
