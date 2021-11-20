#include <stdio.h>

int main(void)
{
  int n, t, c, p;

  scanf("%d %d %d %d", &n, &t, &c, &p);
  printf("%d", (n % t == 0 ? n / t - 1 : n / t) * c * p);

  return 0;
}
