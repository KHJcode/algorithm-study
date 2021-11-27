#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main(void)
{
  int a, b, c = 0, n = 0, sum = 0;

  scanf("%d %d", &a, &b);

  while (1)
  {
    if (b < n)
      break;
    c += 1;
    n += c;
    if (a <= n)
    {
      sum -= max(a - n + c - 1, 0) * c;
      sum += c * c;
    }
  }
  printf("%d", sum - ((n - b) * c));

  return 0;
}
