#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
  string s, r, d, f, c, t;
  int i, j, k, l;
  cin >> s;
  l = s.length();
  for (i = 1; i < l - 1; i++) {
      for (j = i + 1; j < l; j++) {
            f = s.substr(0, i);
            c = s.substr(i, j - i);
            t = s.substr(j, l - j);
            reverse(f.begin(), f.end());
            reverse(c.begin(), c.end());
            reverse(t.begin(), t.end());
            d = f + c + t;
            if ((i == 1 && j == 2) || d.compare(r) < 0) r = d;
      }
  }
  cout << r;
  return 0;
}
