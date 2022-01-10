#include <iostream>
#include <vector>

using namespace std;

vector<int> gph[100001];
int parent[100001];
int point[100001];

void dfs(int at) {
  point[at] = 1;
  for (int i : gph[at]) {
    if (!point[i]) {
      parent[i] = at;
      dfs(i);
    }
  }
}

int main() {
  int n, a, b, i;
  scanf("%d", &n);
  for (i = 0; i < n - 1; i++) {
    scanf("%d %d", &a, &b);
    gph[a].push_back(b);
    gph[b].push_back(a);
  }
  dfs(1);
  for (i = 2; i <= n; i++)
    cout << parent[i] << "\n";
  return 0;
}
