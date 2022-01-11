def getFibonacci(n, array = [0, 1]):
  if n > 1:
    for i in range(2, n+1):  array.append(array[i-2] + array[i-1])
  return array[n]

n = int(input())

result = getFibonacci(n)
print(result)
