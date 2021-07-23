#include <stdio.h>

int main()
{
  int n, i, cnt = 0;
  char str[100000];

  scanf("%d", &n);
  scanf("%s", str);

  for (i = 0; i < n; i++)
  {
    if (
      (str[i] == 44 || str[i] == 46) || (
        (65 <= str[i] && str[i] <= 90) ||
        (97 <= str[i] && str[i] <= 122)
      )
    ) {
      cnt++;
    }
    if (cnt > n - 5)
      printf("%c", str[i]);
  }

  return 0;
}
