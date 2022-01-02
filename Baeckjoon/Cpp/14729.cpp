#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    int n, i;
    float f;
    priority_queue<float, vector<float>, greater<float>> pq;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%f", &f);
        pq.push(f);
    }
    i = 0;
    while (!pq.empty() && i < 7) {
        i++;
        printf("%.3f\n", pq.top());
        pq.pop();
    }
    return 0;
}
