#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l, i, is = 1, c = 0, s[51];
    scanf("%d", &l);
    for (i = 0; i < l; i++)
        scanf("%d", &s[i]);
    scanf("%d", &n);
    if (l > 1) {
        sort(s, s + l);
        if (s[0] > n)
            c = (s[0] - n) * (n - 1) + s[0] - n - 1;
        else {
            for (i = 1; i < l; i++) {
                if (n > s[i - 1] && n < s[i])
                    break;
                if (i == l - 1) is = 0;
            }
            if (is)
                c = (s[i] - n) * (n - s[i - 1] - 1) + s[i] - n - 1;
        }
    }
    cout << c;
    return 0;
}
