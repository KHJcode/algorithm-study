n = int(input())
people = list(map(int,input().split()))
people.sort()
time = 0

for i in range(n+1):
  for j in range(i):  time += people[j]

print(time)