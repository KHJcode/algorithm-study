#include <bits/stdc++.h>

using namespace std;

int lps[5001];

int main() {
    string s;
    int i, j, mx = 0;
    cin >> s;
    while (s.size() > 1) {
        j = 0;
        for (i = 1; i < s.size(); i++) {
            lps[i] = 0;
        }
        for (i = 1; i < s.size(); i++) {
            while (j > 0 && s[i] != s[j]) {
                j = lps[j - 1];
            }
            if (s[i] == s[j]) {
                lps[i] = ++j;
                mx = max(lps[i], mx);
            }
        }
        s.erase(0, 1);
    }
    cout << mx;
    return 0;
}
