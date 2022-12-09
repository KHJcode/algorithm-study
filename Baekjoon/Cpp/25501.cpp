#include <bits/stdc++.h>

using ll = long long;
using namespace std;

ll c;

ll recursion(char* s, ll l, ll r) {
    c++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

ll isPalindrome(string s) {
    c = 0;
    return recursion(const_cast<char*>(s.c_str()), 0, s.length() - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, i;
    string s;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s;
        cout << isPalindrome(s) << " " << c << "\n";
    }
    return 0;
}
