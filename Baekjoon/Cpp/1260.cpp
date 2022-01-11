#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> gph[10001];
queue<int> q;
int dfs_point[1001];
int bfs_point[1001];

void dfs(int at) {
  cout << at << " ";
  dfs_point[at] = 1;
  for (int i : gph[at])
    if (!dfs_point[i])
      dfs(i);
}

void bfs(int at) {
  int d;
  cout << at << " ";
  for (int i : gph[at]) {
    if (!bfs_point[i]) {
      q.push(i);
      bfs_point[i] = 1;
    }
  }
  if (!q.empty()) {
    d = q.front();
    q.pop();
    bfs(d);
  }
}

int main()
{
  int n, m, v, a, b, i;
  scanf("%d %d %d", &n, &m, &v);
  while (m--) {
    scanf("%d %d", &a, &b);
    gph[a].push_back(b);
    gph[b].push_back(a);
  }
  for (i = 1; i <= n; i++)
    sort(gph[i].begin(), gph[i].end());
  dfs(v);
  cout << "\n";
  bfs_point[v] = 1;
  bfs(v);
  return 0;
}
