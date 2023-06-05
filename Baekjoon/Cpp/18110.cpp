#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, j, s = 0, arr[300001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    if (n >= 1) {
        sort(arr, arr + n);
        i = round(n * 0.15);
        for (j = 0; j < i; j++) {
            s -= arr[j] + arr[n - 1 - j];
        }
        cout << round(double(s) / (n - i * 2));
    } else {
        cout << 0;
    }
    return 0;
}
