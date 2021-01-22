n, k = map(int,input().split())
coin = [int(input()) for _ in range(n)]
count = 0

for i in range(1,n+1):
  if coin[-i] < k:  now = k//coin[-i];k-=now*coin[-i];count+=now
  elif coin[-i] == k:  count+=1;break

print(count)