#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) q.push(i);
    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
        i = q.front();
        q.pop();
        q.push(i);
    }
    cout << q.back();
    return 0;
}
