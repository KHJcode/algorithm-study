#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<long long> arr;
    long long n, m, i, s, e, mid, rs = 0, sum;
    scanf("%lld %lld", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%lld", &s);
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end());
    s = 0;
    e = arr[n - 1];
    while (s <= e) {
        sum = 0;
        mid = (s + e) / 2;
        for (auto &i: arr)
            if (i > mid)
                sum += (i - mid);
        if (sum < m)
            e = mid - 1;
        else {
            s = mid + 1;
            rs = mid;
        }
    }
    cout << rs;
    return 0;
}
