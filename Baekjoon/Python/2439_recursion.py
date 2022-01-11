n = int(input())

def star(i):
  _str = ' ' * (n - i) + '*' * i
  if i == 1:  return  _str
  return star(i - 1) + '\n' + _str

print(star(n))
