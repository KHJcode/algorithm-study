#include <stdio.h>

int main(void)
{
  int start[3], end[3], i, result[9] = { 0, }, h, m, s;

  for (i = 0; i < 3; i++)
  {
    scanf("%d %d %d %d %d %d", &start[0], &start[1], &start[2], &end[0], &end[1], &end[2]);
    h = i * 3;
    m = i * 3 + 1;
    s = i * 3 + 2;
    result[s] = end[2] - start[2];
    if (result[s] < 0) {
      result[m] -= 1;
      result[s] += 60;
    }
    result[m] += end[1] - start[1];
    if (result[m] < 0) {
      result[h] -= 1;
      result[m] += 60;
    }
    result[h] += end[0] - start[0];
  }
  for (i = 0; i < 3; i++)
  {
    printf("%d %d %d\n", result[i * 3], result[i * 3 + 1], result[i * 3 + 2]);
  }

  return 0;
}
