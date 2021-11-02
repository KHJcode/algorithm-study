#include <stdio.h>

int main(void)
{
  int l, p, i, width, numbers[5];

  scanf("%d %d", &l, &p);
  width = l * p;
  for (i = 0; i < 5; i++)
    scanf("%d", &numbers[i]);
  for (i = 0; i < 5; i++)
    printf("%d ", numbers[i] - width);
  
  return 0;
}
