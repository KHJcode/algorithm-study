#include <iostream>
#include <algorithm>
using namespace std;

int m[51];

int main()
{
  int n, i, d, a[51], sa[51];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &d);
    sa[i] = d;
    a[i] = d;
  }
  sort(sa, sa + n);
  for (i = 0; i < n; i++) {
    for (d = 0; d < n; d++) {
      if (sa[d] == a[i] && !m[d]) {
        cout << d << " ";
        m[d] = 1;
        break;
      }
    }
  }
  return 0;
}
