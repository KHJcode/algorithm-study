A, B, V = map(int,input().split())
count = int((V-B)/(A-B))
if (V-B) % (A-B) != 0:
      count += 1
print(count)
