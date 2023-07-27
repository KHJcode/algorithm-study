#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int main()
{
    deque<int> dq;
    int n, i, k, c, arr[MAX];
    cin >> n >> k;
    for (i = 0; i < MAX; i++)
    {
        arr[i] = MAX;
    }
    arr[n] = 0;
    dq.push_front(n);
    while (!dq.empty())
    {
        c = dq.front();
        dq.pop_front();
        if (c == k)
        {
            break;
        }
        if (0 < c && c * 2 < MAX && arr[c] < arr[c * 2])
        {
            arr[c * 2] = arr[c];
            dq.push_front(c * 2);
        }
        if (c + 1 < MAX && arr[c] + 1 < arr[c + 1])
        {
            arr[c + 1] = arr[c] + 1;
            dq.push_back(c + 1);
        }
        if (0 <= c - 1 && arr[c] + 1 < arr[c - 1])
        {
            arr[c - 1] = arr[c] + 1;
            dq.push_back(c - 1);
        }
    }
    cout << arr[k];
    return 0;
}
