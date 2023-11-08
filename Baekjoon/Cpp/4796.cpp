#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int l, p, v, i = 0;
    cin >> l >> p >> v;
    while (l != 0 || p != 0 || v != 0)
    {
        i += 1;
        cout << "Case " << i << ": " << (v / p) * l + min(v % p, l) << "\n";
        cin >> l >> p >> v;
    }
    return 0;
}
