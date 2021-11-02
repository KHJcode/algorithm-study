def romanToInt(self, s):
  obj = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
  exc = ['IV', 'IX', 'XL', 'XC', 'CD', 'CM']
  n = 0
  for i in s:  n += obj[i]
  for _s in exc:
    if _s in exc:  n -= (((obj[_s[0]] - obj[_s[1]]) + (obj[_s[0]] + obj[_s[1]])) * s.count(_s))
  return n
