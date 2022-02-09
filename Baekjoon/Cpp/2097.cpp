#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int, int> p = make_pair(1, 1);
    int n, i, a, b;
    long long d;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        a = p.first;
        b = p.second;
        d = (a + 1) * (b + 1);
        while (i > d) {
            if (a == b) a += 1;
            else b += 1;
            d = (a + 1) * (b + 1);
        }
        p = make_pair(a, b);
    }
    cout << (p.first + p.second) * 2;
    return 0;
}
