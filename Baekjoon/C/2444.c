#include <stdio.h>

int main() {
  int n, i, j;

  scanf("%d", &n);

  for (i = 0; i < n * 2 - 1; i++) {
    if (i < n) {
      for (j = 0; j < (n + i * 1); j++)  printf((n - i * 1 - 1) <= j ? "*" : " ");
    } else {
      for (j = 0; j < n * 2 - (1 * (i - n)) - 2; j++)  printf((i - n) < j ? "*" : " ");
    }
    if (n * 2 - 2 != i) printf("\n");
  }

  return 0;
}
