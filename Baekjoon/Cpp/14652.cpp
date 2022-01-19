#include <iostream>
using namespace std;

int main()
{
  int n, m, k, i, j;
  scanf("%d %d %d", &n, &m, &k);
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      if (i * m + j == k)
        cout << i << " " << j;
  return 0;
}
