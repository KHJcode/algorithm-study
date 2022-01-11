a, b = map(int, input().split())
c = 0
section = []
while len(section) < b + 1:
  c += 1
  for i in range(c):
    section.append(c)
print(section)
print(section[max(a-1, 0):b])
print(sum(section[max(a-1, 0):b]))
