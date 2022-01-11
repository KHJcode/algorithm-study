n = int(input())
k = 0
def hanoi(disk,a,b,c):
  if disk==1:  print(a,c)
  else:
    hanoi(disk-1,a,c,b)
    print(a,c)
    hanoi(disk-1,b,a,c)

for _ in range(n):  k=k*2+1
print(k)
hanoi(n, 1,2,3)