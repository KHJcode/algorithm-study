#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g, h, min, man;

  scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
  min = a + b + c + d;
  man = e + f + g + h;
  printf("%d", min < man ? man : min);

  return 0;
}
