#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    pair<int, int> arr[100001];
    int n, a, b, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        arr[i].first = a;
        arr[i].second = b;
    }
    sort(arr, arr + n, compare);
    for (i = 0; i < n; i++)
        cout << arr[i].first << " " << arr[i].second << "\n";
    return 0;
}
