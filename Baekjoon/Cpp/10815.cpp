#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ca, ch;
    int n, m, i, s, e, v, is;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v);
        ca.push_back(v);
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &v);
        ch.push_back(v);
    }
    sort(ca.begin(), ca.end());
    for (auto i: ch) {
        is = 0;
        s = 0;
        e = n - 1;
        while (s <= e) {
            v = (s + e) / 2;
            if (ca[v] == i) {
                is = 1;
                break;
            }
            if (ca[v] < i)
                s = v + 1;
            else e = v - 1;
        }
        cout << is << " ";
    }
    return 0;
}
