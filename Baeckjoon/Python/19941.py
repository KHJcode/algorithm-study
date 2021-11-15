n, k = map(int, input().split())
string = list(input())
person = 0

for i in range(n):
  if string[i] != 'P':  continue
  for j in range(max(0, i - k), min(i + k + 1, n)):
    if string[j] == 'H':
      string[j] = '0'
      person += 1
      break

print(person)
