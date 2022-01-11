def ch(a, b):
  return a == b

a, b, c = int(input()), int(input()), int(input())

if a + b + c == 180:
  if ch(a, b) or ch(b, c) or ch(a, c):
    print("Equilateral" if ch(a, 60) or ch(b, 60) else "Isosceles")
  else:
    print("Scalene")
else:
  print('Error')
