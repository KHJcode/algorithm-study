out = [0 for _ in range(10)]
for i in range(1,int(input())+1):
  for j in str(i):  out[int(j)] += 1

for v in out:  print(v, end=' ')