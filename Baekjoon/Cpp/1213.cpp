#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s, ans;
    char c;
    int d, i, mid = -1, res = 0;
    set<int> als;
    cin >> s;
    for (auto c : s)
    {
        d = int(c) - 65;
        arr[d] += 1;
        als.insert(d);
    }
    for (auto d : als)
    {
        res += arr[d] % 2;
        if (arr[d] % 2 == 1)
        {
            mid = d;
        }
        for (i = 0; i < arr[d] / 2; i++)
        {
            ans += char(d + 65);
        }
    }
    if (res > 1)
    {
        cout << "I'm Sorry Hansoo";
    }
    else
    {
        cout << ans;
        reverse(ans.begin(), ans.end());
        if (mid != -1)
        {
            cout << char(mid + 65);
        }
        cout << ans;
    }
    return 0;
}
