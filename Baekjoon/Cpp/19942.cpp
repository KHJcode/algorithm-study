#include <bits/stdc++.h>

#define MAX 2100000000

using namespace std;

vector<int> cv, nv;

int n, mp, mf, ms, mv, mc = MAX, arr[16][6];

void rec(int i, int p, int f, int s, int v, int c) {
    nv.push_back(i);
    if (mp <= p && mf <= f && ms <= s && mv <= v) {
        if (mc > c) {
            mc = c;
            cv.clear();
            cv.assign(nv.begin(), nv.end());
        }
    } else {
        for (int j = i + 1; j < n; j++) {
            rec(j, p + arr[j][0], f + arr[j][1], s + arr[j][2], v + arr[j][3], c + arr[j][4]);
        }
    }
    nv.pop_back();
}

int main() {
    int i, p, f, s, v, c;
    cin >> n >> mp >> mf >> ms >> mv;
    for (i = 0; i < n; i++) {
        cin >> p >> f >> s >> v >> c;
        arr[i][0] = p;
        arr[i][1] = f;
        arr[i][2] = s;
        arr[i][3] = v;
        arr[i][4] = c;
    }
    for (i = 0; i < n; i++) {
        rec(i, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
    }
    if (mc == MAX) {
        cout << -1;
    } else {
        cout << mc << "\n";
        for (i = 0; i < cv.size(); i++) {
            cout << cv[i] + 1 << " ";
        }
    }
}
