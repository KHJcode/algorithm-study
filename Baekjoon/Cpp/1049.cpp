#include <bits/stdc++.h>
#define MAX 2147483647
#define UNIT 6

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, a, b, d, one = MAX, six = MAX;
    cin >> n >> m;
    d = n / UNIT;
    while (m--)
    {
        cin >> a >> b;
        one = min(one, b);
        six = min(six, a);
    }
    six = min(six, one * UNIT);
    if (n % UNIT == 0)
    {
        cout << d * six;
    }
    else
    {
        cout << min(d * six + (n % UNIT) * one, (d + 1) * six);
    }
    return 0;
}
