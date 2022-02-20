#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, i, s = 0, e, a, b, sum, c = 2000000000, arr[100001];
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    sort(arr, arr + n);
    e = n - 1;
    while (s < e) {
        sum = arr[s] + arr[e];
        if (abs(sum) < c) {
            a = arr[s];
            b = arr[e];
            c = abs(sum);
            if (c == 0) break;
        }
        if (sum > 0) e--;
        else s++;
    }
    cout << a << " " << b;
    return 0;
}
