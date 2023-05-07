#include <bits/stdc++.h>

using namespace std;

int lps[1000001];

int main() {
    vector<int> res;
    string t, p;
    int i, j;
    getline(cin, t);
    getline(cin, p);
    j = 0;
    for (i = 1; i < p.size(); i++) {
        while (j > 0 && p[i] != p[j]) {
            j = lps[j - 1];
        }
        if (p[i] == p[j]) {
            lps[i] = ++j;
        }
    }
    j = 0;
    for (i = 0; i < t.size(); i++) {
        while (j > 0 && t[i] != p[j]) {
            j = lps[j - 1];
        }
        if (t[i] == p[j]) {
            if (j == p.size() - 1) {
                res.push_back(i - p.size() + 2);
                j = lps[j];
            } else {
                j++;
            }
        }
    }
    cout << res.size() << "\n";
    for (auto i : res) {
        cout << i << "\n";
    }
    return 0;
}
