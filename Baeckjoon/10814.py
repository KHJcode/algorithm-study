n = int(input())
person = []

for i in range(n):
  a,b = map(str, input().split())
  person.append((int(a),i,b))
for i in sorted(person):  print(i[0],i[2])