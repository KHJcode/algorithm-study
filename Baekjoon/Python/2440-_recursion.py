def star(i):
  _str = i * '*'
  if i == 1:  return _str
  return _str + '\n' + star(i - 1)

n = int(input())
print(star(n))
