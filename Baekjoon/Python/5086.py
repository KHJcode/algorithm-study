numbers = []
a=b = 10001
while 1:
  a,b = map(int,input().split())
  if a==0:  break
  if a%b==0:  numbers.append('multiple')
  elif b%a == 0:  numbers.append('factor')
  else:  numbers.append('neither')

for v in numbers:  print(v)

