#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x, v;
    stack<int> stk;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> v;
            stk.push(v);
        }
        else if (x == 2)
        {
            if (stk.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << stk.top() << "\n";
                stk.pop();
            }
        }
        else if (x == 3)
        {
            cout << stk.size() << "\n";
        }
        else if (x == 4)
        {
            cout << int(stk.empty()) << "\n";
        }
        else
        {
            cout << (stk.empty() ? -1 : stk.top()) << "\n";
        }
    }
    return 0;
}
