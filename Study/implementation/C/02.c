#include <stdio.h>
#include <string.h>

int main() {
  int n, i, sum, count = 0;
  char hour[3], minute[3], second[3];

  scanf("%d", &n);

  sum = n * 3600 + 3599;

  for (i = 0; i < sum + 1; i++) {
    sprintf(hour, "%d", i / 3600);
    sprintf(minute, "%d", i % 3600 / 60);
    sprintf(second, "%d", i % 60);
    if (
      strstr(hour, "3") != NULL ||
      strstr(minute, "3") != NULL ||
      strstr(second, "3") != NULL
    ) {
      count += 1;
    }
  }

  printf("%d", count);

  return 0;
}
