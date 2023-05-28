#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_map<string, bool> ump;
    int n, c = 1;
    string a, b;
    bool ea, eb;
    cin >> n;
    ump["ChongChong"] = true;
    while (n--) {
        cin >> a >> b;
        ea = ump[a];
        eb = ump[b];
        if (ea && !eb) {
            c += 1;
            ump[b] = true;
        } else if (eb && !ea) {
            c += 1;
            ump[a] = true;
        }
    }
    cout << c;
    return 0;
}
