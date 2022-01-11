#include <stdio.h>

int main(void) {
  long long n, m, sub;

  scanf("%lld %lld", &n, &m);
  sub = n - m;
  printf("%lld", sub * (sub < 0 ? -1 : 1));

  return 0;
}
