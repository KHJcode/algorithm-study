#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, int> mp;
    int n, d, i, c;
    string nm, cg;
    cin >> n;
    for (i = 0; i < n; i++) {
        mp.clear();
        cin >> d;
        c = 1;
        while (d--) {
            cin >> nm >> cg;
            if (!mp[cg]) {
                mp[cg] = 2;
            } else {
                mp[cg] += 1;
            }
        }
        for (auto p : mp) {
            c *= p.second;
        }
        cout << c - 1 << "\n";
    }
    return 0;
}
