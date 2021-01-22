c = 0
for i in range(0,5,1):
      n = int(input())
      if n < 40:
            n = 40
      c += n
print(int(c/5))
