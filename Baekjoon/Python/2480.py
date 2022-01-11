dices = list(map(int, input().split()))

if dices[0] * 3 == sum(dices) and dices[1] * 3 == sum(dices):
  print(10000 + dices[0] * 1000)
elif dices[0] != dices[1] and dices[1] != dices[2] and dices[0] != dices[2]:
  print(max(dices) * 100)
else:
  print(1000 + 100 * (min(dices) if dices.count(min(dices)) == 2 else max(dices)))
