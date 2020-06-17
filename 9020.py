num = [int(input()) for _ in range(int(input()))]
sosu = [True for i in range(10001)]

for i in range(2,98):
  for j in range(i*2,10001,i):  sosu[j] = False

for i in num:
  for j in range(i//2,1,-1):
    if sosu[i-j] and sosu[j]:  print(j, i-j);break

