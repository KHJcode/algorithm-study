#include <iostream>
using namespace std;

int main()
{
  int t, a, b, r, i;
  scanf("%d", &t);
  while (t--)
  {
    r = 1;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
    {
      r *= a;
      r %= 10;
    }
    cout << (r > 0 ? r : 10) << "\n";
  }
  return 0;
}
