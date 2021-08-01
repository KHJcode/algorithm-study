#include <stdio.h>

int main() {
  int arr[1000000] = {0}, m, n, i, j;

  scanf("%d", &m);
  scanf("%d", &n);

  arr[0] = 1;
  arr[1] = 1;

  for (i = 2; i <= n; i++) {
    if (arr[i]) continue;
    for (j = 2 * i; j <= n; j+=i) {
      arr[j] = 1;
    }
  }

  for (i = m; i <= n; i++) {
    if (!arr[i]) printf("%d\n", i);
  }

  return 0;
}
