def simpleSearch(array, target):
  for i in range(len(array)):
    if array[i] == target:  return i

data = [1, 2, 3, 5, 6, 7, 8, 9, 10, 11]

result = simpleSearch(data, 8)
print(result)
