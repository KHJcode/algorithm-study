#include <stdio.h>

int main(void)
{
  int chess[6] = {1, 1, 2, 2, 2, 8}, result[6], i, h;

  for (i = 0; i < 6; i++)
  {
    scanf("%d", &h);
    result[i] = chess[i] - h;
  }
  for (i = 0; i < 6; i++)
    printf("%d ", result[i]);

  return 0;
}
