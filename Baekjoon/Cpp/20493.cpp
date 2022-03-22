#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<long long, long long> map[4] = {
            make_pair(1, 0),
            make_pair(0, -1),
            make_pair(-1, 0),
            make_pair(0, 1),
    };
    long long n, t, i, d, is, x = 0, y = 0, v = 0, c = 0;
    string run;
    cin >> n >> t;
    for (i = 0; i <= n; i++) {
        is = i != n;
        if (is) cin >> d >> run;
        else d = t;
        x += map[v].first * (d - c);
        y += map[v].second * (d - c);
        c = d;
        if (is) {
            v += (run == "right" ? 1 : -1);
            if (v < 0) v = 3;
            else if (v > 3) v = 0;
        }
    }
    cout << x << " " << y;
    return 0;
}
