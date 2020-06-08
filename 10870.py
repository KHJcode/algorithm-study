def fibonacci(num):
  if num >= 2:  return fibonacci(num-1)+fibonacci(num-2)
  return num;
print(fibonacci(int(input())))