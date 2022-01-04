#include <iostream>

using namespace std;

int main() {
    int n, d, i, m, arr[1001], dp[1001];
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &d);
        for (i = 0; i < d; i++) scanf("%d", &arr[i]);
        dp[0] = arr[0];
        m = dp[0];
        for (i = 0; i < d - 1; i++) {
            dp[i + 1] = max(dp[i] + arr[i + 1], arr[i + 1]);
            if (dp[i + 1] > m) m = dp[i + 1];
        }
        cout << m << "\n";
    }
    return 0;
}
