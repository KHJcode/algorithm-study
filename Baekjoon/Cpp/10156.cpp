#include <iostream>
using namespace std;

int main()
{
  int n, m, k, r;
  scanf("%d %d %d", &k, &n, &m);
  r = m - (n * k);
  cout << (r > 0 ? 0 : -r);
  return 0;
}
