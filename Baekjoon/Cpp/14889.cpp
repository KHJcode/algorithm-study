#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int n, sm, mn = 40001, arr[21][21], vst[21];

int cal() {
    if (v.size() < 2) {
        return 0;
    }
    int i, csm = 0, cv = v[v.size() - 1];
    for (i = v.size() - 2; i >= 0; i--) {
        csm += arr[v[i]][cv] + arr[cv][v[i]];
    }
    return csm;
}

void rec(int x, int s, int c) {
    if (c == n / 2) {
        int os, csm = 0;
        for (auto i : v) {
            for (int j = 1; j <= n; j++) {
                if (vst[j] == 0) {
                    csm += arr[j][i] + arr[i][j];
                }
            }
        }
        os = sm - csm - (s * 2);
        mn = min(mn, os < 0 ? os * - 1 : os);
    } else {
        for (int i = x + 1; i <= n; i++) {
            v.push_back(i);
            vst[i] = 1;
            rec(i, s + cal(), c + 1);
            v.pop_back();
            vst[i] = 0;
        }
    }
}

int main() {
    int i, j;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> arr[i][j];
            sm += arr[i][j];
        }
    }
    for (i = 1; i <= n / 2; i++) {
        v.push_back(i);
        vst[i] = 1;
        rec(i, cal(), 1);
        v.pop_back();
        vst[i] = 0;
    }
    cout << mn;
    return 0;
}
