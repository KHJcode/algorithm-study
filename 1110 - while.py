cn = n  = int(input())
count = 0
while True:
  n = int(str(n%10) + str((n//10 + n%10)%10))
  count += 1
  if cn == n:  break
print(count)
