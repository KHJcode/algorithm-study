#include <iostream>
#include <vector>

using namespace std;

vector<int> v[51];
int c, d, l, gph[51];

void dfs(int p, int b) {
    if (gph[p] == 0) {
        gph[p] = 1;
        if (v[p].empty()) {
            if (b)
                c++;
            else
                c--;
        } else {
            for (auto d: v[p])
                dfs(d, b);
            if (b && v[p].size() == 1 && v[p][0] == l)
                c++;
        }
    }
}

int main() {
    int n, i, r;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &d);
        if (d == -1)
            r = i;
        else
            v[d].push_back(i);
    }
    scanf("%d", &l);
    if (l != r) {
        dfs(l, 0);
        for (i = 0; i < n; i++)
            gph[i] = 0;
        for (auto i: v[r])
            dfs(i, 1);
        if (c == 0) c = 1;
    }
    cout << c;
    return 0;
}
