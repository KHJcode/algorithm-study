#include <bits/stdc++.h>

#define MAX 250001

typedef long long ll;

using namespace std;

ll arr[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n = 1, c, i, j;
    for (i = 2; i < MAX; i++) {
        if (arr[i]) {
            continue;
        }
        for (j = i * i; j < MAX; j += i) {
            arr[j] = 1;
        }
    }
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        c = 0;
        for (i = n + 1; i <= n * 2; i++) {
            if (arr[i] == 0) {
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
