def getFactorial(n):
  if n < 2:  return 1
  return n * getFactorial(n - 1)

print(getFactorial(int(input())))
