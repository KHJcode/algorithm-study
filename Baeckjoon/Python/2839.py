n = int(input())
pack = 0

while n != 0:
  if n % 5 == 0:
    pack += n // 5
    break
  if n < 3:
    pack = -1
    break
  pack += 1
  n -= 3

print(pack)
