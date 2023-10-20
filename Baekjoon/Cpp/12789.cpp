#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, d, v, cur = 1;
    stack<int> stk;
    cin >> n;
    while (n--)
    {
        cin >> d;
        if (cur == d)
        {
            cur += 1;
            continue;
        }
        while (!stk.empty())
        {
            v = stk.top();
            if (v != cur)
            {
                break;
            }
            cur += 1;
            stk.pop();
        }
        stk.push(d);
    }
    while (!stk.empty())
    {
        v = stk.top();
        if (v != cur)
        {
            break;
        }
        cur += 1;
        stk.pop();
    }
    cout << (stk.empty() ? "Nice" : "Sad");
    return 0;
}
