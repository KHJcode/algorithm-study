n = int(input())
stars = ['' for _ in range(n*2)]
for i in range(1,n*2+1):
  for j in range(1,n+1):
    if i%2 == j%2:  stars[i-1] += '*'
    else:  stars[i-1] += ' '
  print(stars[i-1])