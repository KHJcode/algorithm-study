n = int(input())
word = list(set([input() for _ in range(n)]))
new = []
for i in word:  new.append((len(i),i))
new.sort()
for j in new:  print(j[1])
