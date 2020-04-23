n = int(input())
numbers = list(map(int, input().split()))
for i in numbers:
      j = 2
      if i == 1:
            n -= 1
      else:
            while j < i:
                  if i%j == 0:
                        n -= 1
                        break
                  j += 1
print(n)
