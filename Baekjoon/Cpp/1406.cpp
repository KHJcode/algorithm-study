#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    char c;
    list<char> lt;
    list<char>::iterator it;
    int m;
    cin >> str;
    for (char &c: str)
        lt.push_back(c);
    cin >> m;
    it = lt.end();
    while (m--) {
        cin >> c;
        if (c == 'P') {
            cin >> c;
            lt.insert(it, c);
        } else if (c == 'D') {
            if (lt.end() != it) it++;
        } else if (c == 'L') {
            if (lt.begin() != it) it--;
        } else {
            if (lt.begin() != it)
                it = lt.erase(--it);
        }
    }
    for (auto it = lt.begin(); it != lt.end(); it++)
        cout << *it;
    return 0;
}
