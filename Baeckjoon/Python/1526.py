n = int(input())

while len(str(n)) != (str(n).count('4') + str(n).count('7')):
  n -= 1

print(n)
