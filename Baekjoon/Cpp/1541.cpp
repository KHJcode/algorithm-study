#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll is, lt, res;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll i, fd, sd;
    cin >> s;
    for (i = 0; i < s.size(); i++) {
        fd = s[i] == '-';
        sd = s[i] == '+';
        if (fd || sd) {
            if (is) {
                res -= lt;
            } else {
                res += lt;
            }
            is += fd;
            lt = 0;
        } else {
            if (lt) {
                lt *= 10;
            }
            lt += s[i] - '0';
        }
    }
    cout << res + (is ? -lt : lt);
    return 0;
}
