#include <iostream>

using namespace std;

int n, s, c = 0, arr[20];

void dfs(int i, int sum) {
    if (i == n) return;
    if (arr[i] + sum == s) c++;
    dfs(i + 1, sum);
    dfs(i + 1, sum + arr[i]);
}

int main() {
    int i;
    scanf("%d %d", &n, &s);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    dfs(0, 0);
    cout << c;
    return 0;
}
