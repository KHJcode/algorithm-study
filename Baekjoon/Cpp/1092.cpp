#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, j, d;
    vector<int> crain, box;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> d;
        crain.push_back(d);
    }
    cin >> m;
    for (i = 0; i < m; i++) {
        cin >> d;
        box.push_back(d);
    }
    sort(crain.begin(), crain.end());
    sort(box.begin(), box.end());
    if (crain[n - 1] < box[m - 1])
        cout << -1;
    else {
        d = 0;
        while (!box.empty()) {
            for (i = n - 1; i > -1; i--) {
                for (j = box.size() - 1; j > -1; j--) {
                    if (crain[i] >= box[j]) {
                        box.erase(box.begin() + j);
                        break;
                    }
                }
            }
            d++;
        }
        cout << d;
    }
    return 0;
}
