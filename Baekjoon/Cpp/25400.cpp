#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, j, i = 0;
    cin >> n;
    for (j = 0; j < n; j++) {
        cin >> d;
        if (i + 1 == d) {
            i += 1;
        }
    }
    cout << n - i;
    return 0;
}
