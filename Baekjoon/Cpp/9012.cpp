#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stack<char> st;
    int n, is;
    cin >> n;
    while (n--) {
        cin >> s;
        is = 1;
        for (char &c: s) {
            if (c == '(')
                st.push(c);
            else {
                if (st.empty()) {
                    is = 0;
                    break;
                }
                st.pop();
            }
        }
        cout << (is && st.empty() ? "YES" : "NO") << "\n";
        while (!st.empty()) st.pop();
    }
    return 0;
}
