#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

int main(void) {
    int n, i, d, e;
    char input[6];
    queue<int> q;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        e = q.empty();
        scanf("%s", input);
        if (!strcmp(input, "push")) {
            scanf("%d", &d);
            q.push(d);
        } else if (!strcmp(input, "empty")) cout << e << "\n";
        else if (!strcmp(input, "size")) cout << q.size() << "\n";
        else {
            if (e) printf("-1\n");
            else if (!strcmp(input, "pop")) {
                q.pop();
                cout << q.front() << "\n";
            } else if (!strcmp(input, "front")) cout << q.front() << "\n";
            else cout << q.back() << "\n";
        }
    }
    return 0;
}
