#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, m, d, r, s, e, i, ms, me, arr[500001];
  scanf("%d", &n);
  for (i = 1; i <= n; i++) scanf("%d", &arr[i]);
  sort(arr + 1, arr + n + 1);
  scanf("%d", &m);
  while (m--) {
    scanf("%d", &d);
    s = 1;
    e = n;
    me = 0;
    ms = 1;
    while (s <= e) {
      r = (s + e) / 2;
      if (arr[r] == d) {
        s = r + 1;
        me = r;
      }
      else if (d < arr[r]) e = r - 1;
      else s = r + 1;
    }
    s = 1;
    e = me;
    while (s <= e) {
      r = (s + e) / 2;
      if (arr[r] == d) {
        e = r - 1;
        ms = r;
      }
      else if (d < arr[r]) e = r - 1;
      else s = r + 1;
    }
    cout << me - ms + 1 << " ";
  }
  return 0;
}
