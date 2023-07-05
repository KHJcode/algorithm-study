#include <bits/stdc++.h>

using namespace std;

string str;

void rec(int s, int m, bool blank) {
    if (blank) {
        for (int i = s; i < s + m; i++) {
            str[i] = ' ';
        }
    } else if (m > 1) {
        rec(s, m / 3, false);
        rec(s + m / 3, m / 3, true);
        rec(s + m / 3 * 2, m / 3, false);
    }
}

int main() {
    int n, m, i;
    while (cin >> n) {
        m = 1;
        for (i = 0; i < n; i++) {
            m *= 3;
        }
        for (i = 0; i < m; i++) {
            str += '-';
        }
        rec(0, m, false);
        cout << str << "\n";
        str.clear();
    }
    return 0;
}
