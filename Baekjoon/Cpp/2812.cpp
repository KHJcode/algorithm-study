#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k, i, d;
    char c;
    stack<int> stk, res;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> c;
        d = c - '0';
        if (i == 0)
        {
            stk.push(d);
        }
        else
        {
            while (!stk.empty() && stk.top() < d && k > 0)
            {
                stk.pop();
                k -= 1;
            }
            stk.push(d);
        }
    }
    while (!stk.empty())
    {
        if (k > 0)
        {
            k -= 1;
        }
        else
        {
            res.push(stk.top());
        }
        stk.pop();
    }
    while (!res.empty())
    {
        cout << res.top();
        res.pop();
    }
    return 0;
}
