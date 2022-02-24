#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    string code;
    deque<int> dq;
    deque<int>::iterator o;
    int t, d, i, j, er, rv;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> code >> d;
        if (d) {
            for (j = 0; j < d * 2 + 1; j++) {
                if (j % 2) {
                    cin >> er;
                    dq.push_back(er);
                } else cin >> c;
            }
        } else cin >> c >> c;
        rv = 0;
        er = 0;
        for (auto &c: code) {
            if (c == 'D') {
                if (dq.empty()) {
                    er = 1;
                    break;
                }
                if (rv) dq.pop_back();
                else dq.pop_front();
            } else rv = rv ? 0 : 1;
        }
        if (i) cout << "\n";
        if (er)
            cout << "error";
        else {
            cout << "[";
            if (rv) {
                for (auto o = dq.rbegin(); o < dq.rend(); o++) {
                    if (o != dq.rbegin()) cout << ",";
                    cout << *o;
                }
            } else {
                for (auto o = dq.begin(); o < dq.end(); o++) {
                    if (o != dq.begin()) cout << ",";
                    cout << *o;
                }
            }
            cout << "]";
        }
        dq.clear();
    }
    return 0;
}
