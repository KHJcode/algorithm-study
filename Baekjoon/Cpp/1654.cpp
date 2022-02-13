#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long k, n, i, s, e, m, sum, rs, arr[10001];
    scanf("%lld %lld", &k, &n);
    for (i = 0; i < k; i++)
        scanf("%lld", &arr[i]);
    sort(arr, arr + k);
    s = 1;
    e = arr[k - 1];
    while (s <= e) {
        sum = 0;
        m = (s + e) / 2;
        for (i = 0; i < k; i++)
            sum += (arr[i] / m);
        if (sum < n)
            e = m - 1;
        else {
            rs = m;
            s = m + 1;
        }
    }
    cout << rs;
    return 0;
}
