#include <iostream>
using namespace std;

int main() 
{
  int n, i, c, d = 1;
  char s[101];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", s);
    if (i && s[0] != c) {
      d = 0;
      break;
    }
    c = s[0];
  }
  cout << d;
  return 0;
}
