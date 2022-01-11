#include <stdio.h>
#include <math.h>

int main(void)
{
  int n, i;
  double s, result[100000];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%lf", &s);
    result[i] = s * 0.8;
  }
  for (i = 0; i < n; i++)
  {
    printf("$%.2lf\n", result[i]);
  }

  return 0;
}
