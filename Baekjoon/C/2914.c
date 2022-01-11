#include <stdio.h>

int main(void) {
  int a, l;

  scanf("%d %d", &a, &l);
  printf("%d", a * (l - 1) + 1);

  return 0;
}
