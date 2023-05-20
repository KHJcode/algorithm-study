#include <bits/stdc++.h>

using namespace std;

int vst[10], arr[10][10];
vector<pair<int, int>> v;
set<int> st;
bool is;

bool check() {
    int x, y, i, j;
    for (x = 1; x <= 3; x++) {
        for (y = 1; y <= 3; y++) {
            st.clear();
            for (i = (x - 1) * 3; i < x * 3; i++) {
                for (j = (y - 1) * 3; j < y * 3; j++) {
                    st.insert(arr[i][j]);
                }
            }
            if (st.size() != 9) {
                return false;
            }
        }
    }
    for (i = 0; i < 9; i++) {
        st.clear();
        for (j = 0; j < 9; j++) {
            st.insert(arr[i][j]);
        }
        if (st.size() != 9) {
            return false;
        }
    }
    for (i = 0; i < 9; i++) {
        st.clear();
        for (j = 0; j < 9; j++) {
            st.insert(arr[j][i]);
        }
        if (st.size() != 9) {
            return false;
        }
    }
    return true;
}

vector<int> find(int x, int y) {
    vector<int> mod;
    int i, j, acd[10], bcd[10], ccd[10];
    for (i = 1; i <= 9; i++) {
        acd[i] = 0;
        bcd[i] = 0;
        ccd[i] = 0;
    }
    for (i = 0; i < 9; i++) {
        bcd[arr[x][i]] = 1;
        ccd[arr[i][y]] = 1;
    }
    x /= 3;
    y /= 3;
    for (i = x * 3; i < (x + 1) * 3; i++) {
        for (j = y * 3; j < (y + 1) * 3; j++) {
            acd[arr[i][j]] = 1;
        }
    }
    for (i = 1; i <= 9; i++) {
        if (acd[i] == 0 && bcd[i] == 0 && ccd[i] == 0) {
            mod.push_back(i);
        }
    }
    return mod;
}

void rec(int x) {
    int i, j;
    if (x == v.size() && !is) {
        if (check()) {
            is = true;
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << "\n";
            }
        }
    } else {
        for (auto i : find(v[x].first, v[x].second)) {
            arr[v[x].first][v[x].second] = i;
            rec(x + 1);
            arr[v[x].first][v[x].second] = 0;
        }
    }
}

int main() {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                v.push_back({i, j});
            }
        }
    }
    rec(0);
    return 0;
}
