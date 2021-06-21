def find(arr):
  l = len(arr)
  for i in range(l):
    for j in range(l):
      s = arr[i] + arr[j]
      if i != j and s == s[::-1]:  return s
  return 0

t = int(input())
_input = [[input() for _ in range(int(input()))] for _ in range(t)]

for arr in _input:  print(find(arr))
