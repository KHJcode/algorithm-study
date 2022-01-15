#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void reverse(char* s) {
  size_t size = strlen(s);
  char temp;
  for (size_t i = 0; i < size / 2; i++) {
    temp = s[i];
    s[i] = s[(size - 1) - i];
    s[(size - 1) - i] = temp;
  }
}

int main()
{
  char A[10003], B[10003], r[10003];
  int i, al, bl, nl, xl, s = 0, is, m = 0;
  cin >> A >> B;
  al = strlen(A);
  bl = strlen(B);
  is = al > bl;
  nl = is ? bl : al;
  xl = is ? al : bl;
  reverse(A);
  reverse(B);
  for (i = 0; i < nl; i++) {
    s = (int)(A[i] - '0') + (int)(B[i] - '0');
    if (i && m) s += m;
    m = s / 10;
    s %= 10;
    r[i] = (char)(s + 48);
  }
  for (i = nl; i < xl; i++) {
    s = m;
    if (is) s += (int)(A[i] - '0');
    else s += (int)(B[i] - '0');
    m = s / 10;
    s %= 10;
    r[i] = (char)(s + 48);
  }
  if (m) r[i++] = '1';
  while (i--) cout << r[i];
  return 0;
}
