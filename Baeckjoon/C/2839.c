#include <stdio.h>

int main(void) {
  int n, bag = 0;

  scanf("%d", &n);
  while (n % 5 && n >= 3) {
    n -= 3;
    bag++;
  }
  printf("%d", n % 5 ? -1 : bag + n / 5);

  return 0;
}
