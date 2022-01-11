#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  int n, i, m, s, e, c, d, is, arr[100001];
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    scanf("%d", &arr[i]);
  sort(arr + 1, arr + n + 1);
  scanf("%d", &m);
  while (m--) {
    scanf("%d", &d);
    s = 1;
    e = n;
    is = 0;
    while (s <= e) {
      c = (s + e) / 2;
      if (arr[c] == d) {
        is = 1;
        break;
      } else if (d < arr[c]) {
        e = c - 1;
      } else {
        s = c + 1;
      }
    }
    cout << is << "\n";
  }
  return 0;
}
