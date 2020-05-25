n,m = map(int,input().split())
dup = list(set([input() for _ in range(n)]) & set([input() for _ in range(m)]))
print(len(dup))
for i in sorted(dup):   print(i)