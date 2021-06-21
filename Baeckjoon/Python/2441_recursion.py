n = int(input())

def star(i):
  _str = (n - i) * ' ' + '*' * i
  if i == 1:  return _str
  return _str + '\n' + star(i - 1)

print(star(n))
