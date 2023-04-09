#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

vector<pair<int, int>> va[MAX];

int b, res, gph[MAX];

void rec(int x, int s, int mx) {
    int i;
    if (gph[x] == 0 && res == 0) {
        gph[x] = 1;
        if (x == b) {
            res = s - mx;
        } else {
            for (auto i : va[x]) {
                rec(i.first, s + i.second, mx > i.second ? mx : i.second);
            }
        }
    }
}

int main() {
    int a, n, i, j, k, d;
    cin >> n >> a >> b;
    for (i = 0; i < n - 1; i++) {
        cin >> j >> k >> d;
        va[j].push_back({k, d});
        va[k].push_back({j, d});
    }
    rec(a, 0, 0);
    cout << res;
    return 0;
}
