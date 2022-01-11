#include <iostream>

using namespace std;

int main() {
    int n, i, q, x, y, ns[100001], ns2[100001];
    scanf("%d", &n);
    scanf("%d", &ns[0]);
    ns2[0] = 0;
    for (i = 1; i < n; i++) {
        scanf("%d", &ns[i]);
        ns2[i] = max((ns[i - 1] > ns[i]) + ns2[i - 1], ns2[i - 1]);
    }
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d", &x, &y);
        x -= 1;
        y -= 1;
        cout << ns2[y] - ns2[x] << "\n";
    }
    return 0;
}
