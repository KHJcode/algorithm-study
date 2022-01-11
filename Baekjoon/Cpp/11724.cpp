#include <iostream>
#include <vector>
using namespace std;

vector<int> gph[1001];
int point[1001];

void dfs(int at) {
  point[at] = 1;
  for (int i : gph[at]) {
    if (!point[i]) dfs(i);
  }
}

int main() {
  int n, i, m, u, v, s = 0;
  scanf("%d %d", &n, &m);
  while (m--) {
    scanf("%d %d", &u, &v);
    gph[u].push_back(v);
    gph[v].push_back(u);
  }
  for (i = 1; i <= n; i++) {
    if (!point[i]) {
      dfs(i);
      s++;
    }
  }
  cout << s;
  return 0;
}
