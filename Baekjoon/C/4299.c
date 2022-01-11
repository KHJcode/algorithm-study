#include <stdio.h>

int main(void)
{
  int a, s, w, l;

  scanf("%d %d", &a, &s);
  w = a + s;
  l = a - s;
  if (w % 2 != 0 && l % 2 != 0)
  {
    printf("-1");
  }
  else
  {
    w /= 2;
    l /= 2;
    if (w >= 0 && l >= 0)
    {
      if (w < l)
        w ^= l ^= w ^= l;
      printf("%d %d", w, l);
    }
    else
    {
      printf("-1");
    }
  }

  return 0;
}
