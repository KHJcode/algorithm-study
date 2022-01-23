#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  int n, m, i, mx = 0, md, arr[1001];
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++)
    scanf("%d", &arr[i]);
  sort(arr, arr + m);
  for (i = 0; i < m; i++) {
    if (arr[i] * min(m - i, n) > mx) {
      mx = arr[i] * min(m - i, n);
      md = arr[i];
    }
  }
  cout << md << " " << mx;
  return 0;
}