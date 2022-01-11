n = input()
res = 'NO'

if len(n) != 1:
  for i in range(len(n) - 1):
    a = i + 1
    b = len(n) - i - 1
    _a = 1
    _b = 1
    for j in range(len(n)):
      if a > j:
        _a *= int(n[j])
      else:
        _b *= int(n[j])
    if _a == _b:
      res = 'YES'
      break

print(res)
