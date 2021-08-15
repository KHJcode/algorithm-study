#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, k, i, coins = 0;
  
  scanf("%d %d", &n, &k);

  int* values = (int*)malloc(sizeof(int) * n);
  for (int i = n - 1; i >= 0; i--) {
    scanf("%d", &values[i]);
  }

  for (i = 0; i < n; i++) {
    if (k == 0) break;
    if (values[i] != 0 && k >= values[i]) {
      coins += k / values[i];
      k %= values[i];
    }
  }

  printf("%d", coins);
  free(values);

  return 0;
}
