#include <iostream>

using namespace std;

int main() {
    int i, a, b, p = 0, mx = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d %d", &a, &b);
        p -= a;
        mx = max(p, mx);
        p += b;
        mx = max(p, mx);
    }
    cout << mx;
    return 0;
}
