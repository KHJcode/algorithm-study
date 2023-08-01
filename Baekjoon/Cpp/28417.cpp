#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, s, mx = 0, a[3], b[6];
    cin >> n;
    while (n--)
    {
        for (i = 0; i < 2; i++)
        {
            cin >> a[i];
        }
        s = max(a[0], a[1]);
        for (i = 0; i < 5; i++)
        {
            cin >> b[i];
        }
        sort(b, b + 5);
        s += b[4] + b[3];
        mx = max(s, mx);
    }
    cout << mx;
    return 0;
}
