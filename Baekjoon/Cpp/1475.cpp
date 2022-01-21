#include <iostream>
#include <string.h>
using namespace std;

int m[8][10];

int main()
{
  char n[8];
  int i, l, j, d, mx = 0;
  scanf("%s", &n);
  l = strlen(n);
  for (i = 0; i < l; i++)
  {
    for (j = 0; j < 8; j++)
    {
      d = n[i] - '0';
      if (!m[j][d])
      {
        m[j][d] = 1;
        mx = max(mx, j);
        break;
      }
      else if (d == 6 && !m[j][9])
      {
        m[j][9] = 1;
        mx = max(mx, j);
        break;
      }
      else if (d == 9 && !m[j][6])
      {
        m[j][6] = 1;
        mx = max(mx, j);
        break;
      }
    }
  }
  cout << mx + 1;
  return 0;
}
