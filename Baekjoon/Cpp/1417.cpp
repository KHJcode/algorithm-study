#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i, arr[51];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    i = 0;
    if (n > 1) {
        sort(arr + 1, arr + n);
        while (arr[0] <= arr[n - 1]) {
            i++;
            arr[0] += 1;
            arr[n - 1] -= 1;
            sort(arr + 1, arr + n);
        }
    }
    cout << i;
    return 0;
}
