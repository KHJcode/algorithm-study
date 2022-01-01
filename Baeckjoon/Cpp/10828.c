#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int main()
{
    int n, i, d;
    stack<int> stack;
    char input[6];

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%s", input);
        if (!strcmp("push", input)) {
            scanf("%d", &d);
            stack.push(d);
        }
        else if (!strcmp("top", input)) {
            if (stack.empty()) {
                cout << -1 << "\n";
                continue;
            }
            cout << stack.top() << "\n";
        } else if (!strcmp("size", input)) {
            cout << stack.size() << "\n";
        } else if (!strcmp("empty", input)) {
            cout << stack.empty() << "\n";
        } else  {
            if (stack.empty()) {
                cout << -1 << "\n";
                continue;
            }
            cout << stack.top() << "\n";
            stack.pop();
        }
    }

    return 0;
}
