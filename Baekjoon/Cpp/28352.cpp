#include <bits/stdc++.h>

using namespace std;

int fix(int x) {
    if (x == 10) {
        return 1;
    }
    return fix(x - 1) * x;
}

int main() {
    int n;
    cin >> n;
    cout << 6 * fix(n);
    return 0;
}
