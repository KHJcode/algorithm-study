#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, i;
    bool res = true;
    string s1, s2;
    cin >> n;
    cin >> s1 >> s2;
    for (i = 0; i < n; i++) {
        if (!(
            (s1[i] == s2[i]) ||
            (s1[i] == 'o' && s2[i] == '0') ||
            (s1[i] == '0' && s2[i] == 'o') ||
            (s1[i] == 'l' && s2[i] == '1') ||
            (s1[i] == '1' && s2[i] == 'l')
        )) {
            res = false;
            break;
        }
    }
    cout << (res ? "Yes" : "No");
    return 0;
}
