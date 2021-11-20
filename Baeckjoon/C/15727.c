#include <stdio.h>

int main(void) {
  int l, t;

  scanf("%d", &l);
  t = l % 5 == 0 ? l / 5 : l / 5 + 1;
  printf("%d", t);

  return 0;
}
