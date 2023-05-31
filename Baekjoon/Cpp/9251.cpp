#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j, mx = 0;
    vector<int> arr[1002];
    string a, b;
    cin >> a >> b;
    for (i = 0; i <= a.size(); i++) {
        for (j = 0; j <= b.size(); j++) {
            arr[i].push_back(0);
        }
    }
    for (i = 1; i <= a.size(); i++) {
        for (j = 1; j <= b.size(); j++) {
            arr[i][j] = max(arr[i - 1][j], max(arr[i][j - 1], arr[i - 1][j - 1] + (a[i - 1] == b[j - 1])));
        }
    }
    cout << arr[a.size()][b.size()];
    return 0;
}
