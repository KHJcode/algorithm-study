#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int m, s, arr[8001];

int main() {
    vector<int> v;
    int n, i, d, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &d);
        v.push_back(d);
    }
    sort(v.begin(), v.end());
    for (auto i: v)
        arr[i + 4000] += 1;
    for (auto i: v) {
        s += i;
        if (arr[m + 4000] < arr[i + 4000]) {
            c = 1;
            m = i;
        } else if (arr[m + 4000] == arr[i + 4000] && c == 1 && m != i) {
            c++;
            m = i;
        }
    }
    cout << round((float) s / (float) n) << "\n";
    cout << v[n / 2] << "\n";
    cout << m << "\n";
    cout << v[n - 1] - v[0];
    return 0;
}
