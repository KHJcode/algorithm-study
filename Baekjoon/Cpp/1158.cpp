#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, k, d, i;
    queue<int> q;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) q.push(i);
    cout << "<";
    while (!q.empty()) {
        i = 1;
        while (i < k) {
            d = q.front();
            q.pop();
            q.push(d);
            i++;
        }
        cout << q.front() << (q.size() != 1 ? ", " : ">");
        q.pop();
    }
    return 0;
}
