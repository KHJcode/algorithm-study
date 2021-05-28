n = int(input())
sugar = 0
while n != 0:
      if n%5 == 0:
            sugar += int(n/5)
            break
      elif n < 3:
            sugar = -1
            break
      else:
            n -= 3
            sugar += 1
print(sugar)
