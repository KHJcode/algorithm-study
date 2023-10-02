#include <bits/stdc++.h>

using namespace std;

int mp[27];

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int i;
    for (i = 0; i < len; i++)
    {
        mp[int(s[i]) - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        cout << mp[i] << " ";
    }
    return 0;
}
