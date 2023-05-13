#include <bits/stdc++.h>

using namespace std;

priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> dpq;
unordered_map<int, int> pq_mp, dpq_mp;

void pq_refresh() {
    if (!pq.empty()) {
        int x = pq.top();
        while (pq_mp[x] > 0) {
            pq.pop();
            pq_mp[x] -= 1;
            x = pq.top();
        }
    }
}

void dpq_refresh() {
    if (!dpq.empty()) {
        int x = dpq.top();
        while (dpq_mp[x] > 0) {
            dpq.pop();
            dpq_mp[x] -= 1;
            x = dpq.top();
        }
    }
}

int main() {
    int t, i, d, x;
    char c;
    cin >> t;
    while (t--) {
        cin >> i;
        while (i--) {
            cin >> c >> d;
            if (c == 'I') {
                pq.push(d);
                dpq.push(d);
            } else {
                if (d == 1) {
                    pq_refresh();
                    if (!pq.empty()) {
                        x = pq.top();
                        pq.pop();
                        dpq_mp[x] = (dpq_mp[x] ? dpq_mp[x] : 0) + 1;                        
                    }
                } else {
                    dpq_refresh();
                    if (!dpq.empty()) {
                        x = dpq.top();
                        dpq.pop();
                        pq_mp[x] = (pq_mp[x] ? pq_mp[x] : 0) + 1;   
                    }
                }
            }
        }
        pq_refresh();
        dpq_refresh();
        if (pq.empty()) {
            cout << "EMPTY" << "\n";
        } else {
            cout << pq.top() << " " << dpq.top() << "\n";
        }
        pq = priority_queue<int>();
        dpq = priority_queue<int, vector<int>, greater<int>>();
        dpq_mp = unordered_map<int, int>();
        pq_mp = unordered_map<int, int>();
    }
    return 0;
}
