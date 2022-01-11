#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    int n, i, d;
    queue<int> queue;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        queue.push(i);
    }
    while (queue.size() != 1) {
        queue.pop();
        d = queue.front();
        queue.pop();
        queue.push(d);
    }
    cout << queue.front();
    return 0;
}
