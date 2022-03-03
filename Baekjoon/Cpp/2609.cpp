#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;
    scanf("%d %d", &a, &b);
    c = min(a, b);
    a = max(a, b);
    b = c;
    c = a * b;
    while (b) {
        n = a % b;
        a = b;
        b = n;
    }
    cout << a << "\n" << (int) (c / a);
    return 0;
}
