#include <iostream>

using namespace std;

int c, n, point[100001], rocks[100001];

void dfs(int at) {
  point[at] = 1;
  c++;
  if (1 <= at - rocks[at] && !point[at - rocks[at]])
    dfs(at - rocks[at]);
  if (n >= at + rocks[at] && !point[at + rocks[at]])
    dfs(at + rocks[at]);
}

int main() {
  int s, i;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    scanf("%d", &rocks[i]);
  scanf("%d", &s);
  dfs(s);
  cout << c;
  return 0;
}
