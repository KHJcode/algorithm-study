def star(num):
  _str = num * '*'
  if num == 1:  return _str
  return star(num - 1) + '\n' + _str

n = int(input())

print(star(n))
