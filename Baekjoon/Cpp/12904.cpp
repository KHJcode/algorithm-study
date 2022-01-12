#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  char s[1000], t[1001];
  vector<char> sv, tv;
  int i, sl, tl, is = 1;
  scanf("%s %s", s, t);
  sl = strlen(s);
  tl = strlen(t);
  for (i = 0; i < sl; i++) sv.push_back(s[i]);
  for (i = 0; i < tl; i++) tv.push_back(t[i]);
  while (sv.size() < tv.size()) {
    if (tv.back() == 'B') {
      tv.pop_back();
      reverse(tv.begin(), tv.end());
    } else tv.pop_back();
  }
  for (i = 0; i < sl; i++) {
    if (sv[i] != tv[i]) {
      is = 0;
      break;
    }
  }
  cout << is;
  return 0;
}
