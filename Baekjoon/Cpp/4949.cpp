#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<char> st;
    string s;
    bool is;
    int i;
    getline(cin, s);
    while (s != ".") {
        is = true;
        st = stack<char>();
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '[' || s[i] == '(') {
                st.push(s[i]);
            } else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    is = false;
                    break;
                }
            } else if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    is = false;
                    break;
                }
            }
        }
        cout << (is && st.empty() ? "yes" : "no") << "\n";
        getline(cin, s);
    }
    return 0;
}
