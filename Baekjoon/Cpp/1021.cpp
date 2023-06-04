#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool is;
    int n, m, i, j, res, arr[51];
    deque<int> dq;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        dq.push_back(i);
        if (i <= m)
        {
            cin >> arr[i - 1];
        }
    }
    res = 0;
    for (i = 0; i < m; i++)
    {
        is = false;
        for (j = 0; j < dq.size(); j++) {
            if (dq[j] == arr[i]) {
                if (j <= dq.size() / 2) {
                    is = true;
                }
                break;
            }
        }
        while (dq.front() != arr[i]) {
            res += 1;
            if (is) {
                dq.push_back(dq.front());
                dq.pop_front();
            } else {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        dq.pop_front();
    }
    cout << res;
    return 0;
}
