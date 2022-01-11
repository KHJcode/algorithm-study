#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  printf("%d %d", (int)(n * .78), (int)(n * .8) + (int)(n * .2 * .78));

  return 0;
}
