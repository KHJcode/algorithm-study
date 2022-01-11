#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
int virus[101];

void dfs(int at) {
  virus[at] = 1;
  for (int i : v[at]) {
    if (!virus[i]) dfs(i);
  }
}

int main() {
  int c, n, a, b, s = 0;
  scanf("%d %d", &c, &n);
  while (n--) {
    scanf("%d %d", &a, &b);
    v[a].push_back(b);
    v[b].push_back(a);
  }
  dfs(1);
  while (c > 1) {
    if (virus[c] && c != 1) s++;
    c--;
  }
  cout << s;
  return 0;
}
