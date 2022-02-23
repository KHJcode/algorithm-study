#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[10001];

int main() {
    vector<int> v;
    int n, i;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &i);
        if (!arr[i])
            v.push_back(i);
        arr[i]++;
    }
    sort(v.begin(), v.end());
    for (auto i: *&v)
        for (n = 0; n < arr[i]; n++)
            cout << i << "\n";
    return 0;
}
