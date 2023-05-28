#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> mp;

bool compare(string a, string b) {
    if (mp[a] != mp[b]) {
        return mp[a] > mp[b];
    } else if (a.size() != b.size()) {
        return a.size() > b.size();
    }
    return a < b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i;
    string s;
    vector<string> arr;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> s;
        if (s.size() >= m) {
            if (mp[s]) {
                mp[s] += 1;
            } else {
                mp[s] = 1;
                arr.push_back(s);
            }
        }
    }
    sort(arr.begin(), arr.end(), compare);
    for (auto s : arr) {
        cout << s << "\n";
    }
    return 0;
}
