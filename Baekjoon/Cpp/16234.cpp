#include <bits/stdc++.h>
#define MAX 50

using namespace std;
using pii = pair<int, int>;

vector<vector<pii>> state;
bool visited[MAX][MAX];
int arr[MAX][MAX];
int total[MAX * MAX];
int n, l, r;
const int dy[4] = {0, 0, 1, -1}, dx[4] = {1, -1, 0, 0};

inline bool check(int y, int x)
{
    return x >= 0 && n > x && y >= 0 && n > y;
}

void rec(int id, int y, int x)
{
    visited[y][x] = true;
    if (state.size() == id)
    {
        state.push_back(vector<pii>());
    }
    state[id].push_back(make_pair(y, x));
    total[id] += arr[y][x];
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (check(ny, nx) && !visited[ny][nx])
        {
            int dif = abs(arr[y][x] - arr[ny][nx]);
            if (dif >= l && dif <= r)
            {
                rec(id, ny, nx);
            }
        }
    }
}

inline void clear()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
            total[i * (n - 1) + j] = 0;
        }
    }
    state.clear();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    bool check = true;
    int i, j, d, res = 0;
    cin >> n >> l >> r;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    while (check)
    {
        d = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (!visited[i][j])
                {
                    rec(d, i, j);
                    d += 1;
                }
            }
        }
        check = false;
        for (i = 0; i < state.size(); i++)
        {
            int size = state[i].size();
            if (size == 1)
            {
                continue;
            }
            bool is_same = true;
            int val = total[i] / size;
            for (j = 0; j < size; j++)
            {
                if (arr[state[i][j].first][state[i][j].second] != val)
                {
                    is_same = false;
                    arr[state[i][j].first][state[i][j].second] = val;
                }
            }
            if (!is_same)
            {
                check = true;
            }
        }
        if (check)
        {
            clear();
            res += 1;
        }
    }
    cout << res;
    return 0;
}
