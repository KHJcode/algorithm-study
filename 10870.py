def getFibonacci(n):
  if n <= 1:  return n
  return getFibonacci(n - 1) + getFibonacci(n - 2)

data = int(input())

result = getFibonacci(data)
print(result)
