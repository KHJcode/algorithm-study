#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n, i, d, arr[MAX];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        if (i) {
            if (i > 1) {
                d = gcd(arr[i] - arr[i - 1], d);
            } else {
                d = arr[i] - arr[i - 1];
            }
        }
    }
    cout << (arr[n - 1] - arr[0]) / d - n + 1;
    return 0;
}
