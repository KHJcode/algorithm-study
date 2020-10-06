def getFactorial(n):
  if n == 1 or n == 0:  return 1
  result = n * getFactorial(n - 1)
  return result

n = int(input())

result = getFactorial(n)
print(result)
