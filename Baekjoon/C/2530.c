#include <stdio.h>

int main(void) {
  int h, m, s, r, e;

  scanf("%d %d %d %d", &h, &m, &s, &r);
  s += r % 60;
  if (s > 59) {
    m += s / 60;
    s %= 60;
  }
  m += r % 3600 / 60;
  if (m > 59) {
    h += m / 60;
    m %= 60;
  }
  h += r / 3600;
  if (h > 23) h %= 24;
  printf("%d %d %d", h, m, s);

  return 0;
}
