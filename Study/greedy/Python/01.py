def sortList(list):
  length = len(list)
  for i in range(length):
    for j in range(length - i - 1):
      if list[j] > list[j + 1]:
        list[j], list[j + 1] = list[j + 1], list[j]
  return list

n = int(input())
adventurers = sortList(list(map(int, input().split())))
count = 0
result = 0

for i in range(len(adventurers)):
  count += 1
  if count >= adventurers[i]:
    result += 1
    count = 0

print(count)
